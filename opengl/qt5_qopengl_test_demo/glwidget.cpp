#include "glwidget.h"
#include <QPainter>
#include <QTimer>
#include <QDebug>
#include <QGraphicsOpacityEffect>
#include <QLabel>
#include <QtMath>


GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{

    setFixedSize(200, 200);

    //设置窗体背景颜色为红色
#if 1
    QPalette linkColor;
    linkColor.setColor(QPalette::Background, Qt::red);
    setPalette(linkColor);
    setAutoFillBackground(true);
#endif

    //设置控件是否透明
#if 1
   setAutoFillBackground(false);
   setWindowFlags(Qt::FramelessWindowHint);//设置无边框
   setAttribute(Qt::WA_TranslucentBackground, true);
#endif

}

void GLWidget::paintEvent(QPaintEvent *event)
{
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

