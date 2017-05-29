#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>

class RenderArea : public QWidget
{
  Q_OBJECT
public:
  explicit RenderArea(QWidget *parent = nullptr);

  QSize minimumSizeHint() const Q_DECL_OVERRIDE;
  QSize sizeHint() const Q_DECL_OVERRIDE;

  enum ShapeType { Astroid, Cycloid, HuygensCycloid, HypoCycloid, FutureCurve };

  void setBackgroundColor(QColor color) { mBackgroundColor = color; }
  QColor getBackgroundColor() const { return mBackgroundColor; }

  void setShape(ShapeType shape){ mShape = shape; on_shape_changed(); }
  ShapeType getShape () const { return mShape; }

 protected:
  void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
  void on_shape_changed();
  QPointF compute(float t);
  QPointF compute_astroid(float t);
  QPointF compute_cycloid(float t);
  QPointF compute_huygens(float t);
  QPointF compute_hypo(float t);
  QPointF compute_future_curve(float t);

private:
  QColor mBackgroundColor;
  QColor mShapeColor;
  ShapeType mShape;

  int mStepCount;
  float mScale;
  float mIntervalLength;
};

#endif // RENDERAREA_H
