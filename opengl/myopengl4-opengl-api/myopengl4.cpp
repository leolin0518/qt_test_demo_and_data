#include "myopengl4.h"
#include <QPalette>
#include <QPainter>
#include <QColor>
#include <QFont>

myopengl4::myopengl4(QWidget *parent)
    : QGLWidget(parent,0,Qt::Window)
{
    setFixedSize(200, 200);

    //设置窗体颜色为红色背景
    QPalette linkColor;
    linkColor.setColor(QPalette::Background, Qt::red);
    setPalette(linkColor);
    setAutoFillBackground(true);

    //设置控件是否透明
#if 1
   setAutoFillBackground(false);
  // setWindowFlags(Qt::FramelessWindowHint);
   setAttribute(Qt::WA_TranslucentBackground, true);
#endif
   glClearColor(0.0, 0.0, 0.0, 0.0);
}

myopengl4::~myopengl4()
{

}

void myopengl4::paintEvent(QPaintEvent *event)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    QPainter paint(this);
    paint.begin(this);

    //设置画笔颜色
    QColor wordColor = QColor(237, 212, 0, 255);
    paint.setPen(wordColor);

    //设置字体
    QFont wordFont = QFont(QString("黑体"), 30);
    paint.setFont(wordFont);

    //绘制内容
    paint.drawText(10, 50, QString("HelloGL"));
    paint.end();
}
