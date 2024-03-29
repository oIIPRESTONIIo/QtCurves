#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  void on_btnAstroid_clicked();

  void on_btnCycloid_clicked();

  void on_btnHuygens_clicked();

  void on_btnHypo_clicked();

  void on_btnLine_clicked();

  void on_spinScale_valueChanged(double scale);

  void on_spinInterval_valueChanged(double interval);

  void on_spinCount_valueChanged(int count);

  void on_btnBackground_clicked();

  void on_btnLineColor_clicked();

  void on_btnCircle_clicked();

  void on_btnElipse_clicked();

  void on_btnFancy_clicked();

  void on_btnStarfish_clicked();

  void on_btnCloud_clicked();

  void on_btnCloud2_clicked();

private:
  void update_ui();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
