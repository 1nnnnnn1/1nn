#include"graphics.h"
#include<time.h>
#include<conio.h>
#include <math.h>

const double pi = 3.1415926;
const double constVar = 2.718281828;

// 绘制正弦曲线
void drawSin(int a, int b, int c, int d, COLORREF color);
// 绘制心形线
void drawHeartCurve(int arc, int dx, int dy, COLORREF color);
// 绘制蝴蝶线
void drawButterCurve(double a, int dx, int dy, COLORREF color);
// 绘制玫瑰线
void drawRoseCurve(double n, double a, int dx, int dy, COLORREF color);

int main()
{
    initgraph(900, 700);    // 设置绘图窗口的大小
    setbkcolor(RGB(255, 255, 255));
    setcolor(RGB(255, 255, 0));
    circle(600, 100, 100);  // 绘制圆

    // 绘制正弦曲线
    int a, b, c, d;
    a = 80; b = 5; c = 1; d = 100;
    COLORREF color = RGB(0, 255, 0);
    drawSin(a, b, c, d, color);

    // 绘制心形线
    int arc = 100;
    int dx = 150;
    int dy = 400;
    color = RGB(255, 255, 0);
    drawHeartCurve(arc, dx, dy, color);

    // 蝴蝶线
    a = 50;
    dx = 500;
    dy = 300;
    for (a = 30; a < 50; a++)
    {
        color = color + 10;
        drawButterCurve(a, dx, dy, color);
    }

    // 绘制玫瑰曲线
    double n = 7;
    a = 20;
    dx = 5; dy = 600;
    color = RGB(255, 0, 255);
    for (n = 1; n < 9; n++)
    {
        a = a * 1.2;
        dx = dx + 2 * a;
        drawRoseCurve(n, a, dx, dy, color);
    }

    system("pause");
    closegraph();
    return 0;
}

/*功能: 绘制正弦曲线
函数名称: drawSin
参数: a--振幅
      b--频率
      c--偏移
      d--绘图的基线
      color--绘图的颜色
返回值: void, 只是绘图操作
*/
void drawSin(int a, int b, int c, int d, COLORREF color)
{
    double x, y;
    x = 10;
    y = a * sin(b * x + c) + d;
    setcolor(color);
    moveto(int(x + 0.5), int(y + 0.5));
    for (int i = 10; i < 400; i++)
    {
        x = i;
        y = a * sin(b * x + c) + d;
        lineto(int(x + 0.5), int(y + 0.5));
    }
}

/*功能: 绘制心形曲线
函数名称: drawHeartCurve
参数: arc--定义弧长
      dx--x方向绘图的基线
      dy--y方向绘图的基线
      color--绘图的颜色
返回值: void, 只是绘图操作
*/
void drawHeartCurve(int arc, int dx, int dy, COLORREF color)
{
    double a = arc / 8.0;
    double x, y;
    double bound = a / 2.8; // 循环执行的条件
    double t = -bound;
    x = dx + a * (2 * cos(t) - cos(2 * t)) * t;
    y = dy + a * (2 * sin(t) - sin(2 * t)) * t;
    setcolor(color);
    moveto(int(x + 0.5), int(y + 0.5));
    while (t <= bound)
    {
        t = t + 0.01;
        x = dx + a * (2 * cos(t) - cos(2 * t)) * t;
        y = dy + a * (2 * sin(t) - sin(2 * t)) * t;
        lineto(int(x + 0.5), int(y + 0.5));
    }
}

/*功能: 绘制蝴蝶曲线
函数名称: drawButterCurve
参数: a--定义蝴蝶大小
      dx--x方向绘图的基线
      dy--y方向绘图的基线
      color--绘图的颜色
返回值: void, 只是绘图操作
*/
void drawButterCurve(double a, int dx, int dy, COLORREF color)
{
    double x, y;
    double fi;
    double bound = 2 * pi / 3.0; // 循环执行的条件
    double tmp1, tmp2, tmp3;
    fi = -2 * pi;
    while (fi < 2 * pi)
    {
        fi = fi + 0.001;
        tmp1 = exp(cos(fi));
        tmp2 = 2 * cos(4 * fi);
        tmp3 = sin(fi / 12);
        tmp3 = tmp3 * tmp3 * tmp3;
        tmp3 = tmp3 * tmp3 * tmp3;
        x = dx + a * sin(fi) * (tmp1 - tmp2 - tmp3);
        y = dy + a * cos(fi) * (tmp1 - tmp2 - tmp3);
        putpixel(int(x + 0.5), int(y + 0.5), color);
    }
}

/*功能: 绘制玫瑰曲线
函数名称: drawRoseCurve
参数: n--定义花瓣数, n=3则有3片, n=4则有4片, n=5则有5片
      a--定义叶片大小
      dx--x方向绘图的基线
      dy--y方向绘图的基线
      color--绘图的颜色
返回值: void, 只是绘图操作
*/
void drawRoseCurve(double n, double a, int dx, int dy, COLORREF color)
{
    double x, y;
    double fi, r;
    double bound = n * pi; // 循环执行的条件
    fi = -bound;
    while (fi <= bound)
    {
        fi = fi + 0.0001;
        r = a * sin(fi * n); // 也可以改为 r = a * cos(fi * n);
        x = dx + r * cos(fi);
        y = dy + r * sin(fi);
        putpixel(int(x + 0.5), int(y + 0.5), color);
    }
}
