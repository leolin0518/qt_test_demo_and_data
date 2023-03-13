#ifndef MYOPENGL4_H
#define MYOPENGL4_H

#include <QWidget>
#include <QGLWidget>

class myopengl4 : public QGLWidget
{
    Q_OBJECT

public:
    myopengl4(QWidget *parent = 0);
    ~myopengl4();


protected:
    void paintEvent(QPaintEvent *event);

};

#endif // MYOPENGL4_H
