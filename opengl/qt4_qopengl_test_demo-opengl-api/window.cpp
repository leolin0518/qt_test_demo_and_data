#include "glwidget.h"
#include "widget.h"
#include "window.h"
#include <QGridLayout>
#include <QLabel>

Window::Window()
{

    setWindowTitle(tr("Native and OpenGL Widgets"));

    setFixedSize(700, 700);

    QPalette MainColor;
    MainColor.setColor(QPalette::Background, Qt::blue);
    setAutoFillBackground(true);
    setPalette(MainColor);

    //设置背景透明
#if 1
    setAttribute(Qt::WA_TranslucentBackground,true);
#endif

    Widget *native = new Widget(this);
    GLWidget *openGL = new GLWidget(this);
    QLabel *nativeLabel = new QLabel(tr("Native"));
    nativeLabel->setAlignment(Qt::AlignHCenter);
    QLabel *openGLLabel = new QLabel(tr("OpenGL"));
    openGLLabel->setAlignment(Qt::AlignHCenter);

    QGLFormat glFormat;
    glFormat.setAlpha(true);
    openGL->setFormat(glFormat);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(native, 0, 0);
    layout->addWidget(openGL, 0, 1);
    layout->addWidget(nativeLabel, 1, 0);
    layout->addWidget(openGLLabel, 1, 1);
    setLayout(layout);

}
