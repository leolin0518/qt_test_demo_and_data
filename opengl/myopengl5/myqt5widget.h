#ifndef MYQT5WIDGET_H
#define MYQT5WIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
class myqt5Widget : public QOpenGLWidget
{
    Q_OBJECT

public:
    myqt5Widget(QWidget *parent = nullptr);
    ~myqt5Widget();

protected:
    void paintEvent(QPaintEvent *event) override;

};
#endif // MYQT5WIDGET_H
