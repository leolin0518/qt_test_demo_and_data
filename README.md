# Qt下各种测试demo和数据资料

#### 介绍
Qt下各种测试demo，用例等


#### 说明


- opengl目录
    该目录下为使用qt4和qt5下测试opengl,创建的窗体的背景透明情况。Qt4下使用QOpenGl创建widget，Qt5下使用QOpenGL创建widget。各种透明情况的demo。

├── myopengl4
├── myopengl4-opengl-api
├── myopengl5
├── qt4_qopengl_test_demo
├── qt4_qopengl_test_demo-opengl-api
├── qt5_qopengl_test_demo
└── zip

myopengl4 是qt4单独使用创建的opengl窗体
myopengl4-opengl-api 是qt4单独使用创建的opengl窗体，可背景透明
myopengl5 是qt5单独使用创建的opengl窗体
qt4_qopengl_test_demo 是qt4下，一个widget上创建两个子窗口，一个是opengl(QGLWidget)一个是原生widget
qt4_qopengl_test_demo-opengl-api 是qt4下，一个widget上创建两个子窗口，一个是opengl一个是原生widget。opengl可透明
qt5_qopengl_test_demo 是qt5下，一个widget上创建两个子窗口，一个是qopengl(QOpenGLWidget)一个是原生widget

