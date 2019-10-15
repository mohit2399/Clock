#include<iostream>
#include<graphics.h>
#include<math.h>
#include<stdio.h>
#define TPI 6.28
using namespace std;
int main()
{
    char msgs[1], msgm[1], msgh[1];
    int gd=DETECT, gm;
            float theta=0, alpha=0, delta=0, xs, ys, xm, ym, xh, yh, j=0, k=0;
     initgraph(&gd, &gm, "");
    for (int i=0; i<65; i++)
    {
    xs=(150*cos(theta-1.57)), ys=200+(150*sin(theta-1.57));
    setcolor(RED);
    setfillstyle(1, 2);
    circle(200, 200, 150);
    setcolor(CYAN);
    circle(200+xs, ys, 10);
    circle(200+xm, ym, 10);
    circle(200+xh, yh, 10);
    setcolor(YELLOW);
    line(200, 200, 200+xs, ys);
    theta=theta+(TPI/60);
    xm=(150*cos(alpha-1.57)), ym=200+(150*sin(alpha-1.57));
    setcolor(LIGHTGREEN);
    line(200, 200, 200+xm, ym);
    alpha=alpha+(TPI/3600);
    xh=(150*cos(delta-1.57)), yh=200+(150*sin(delta-1.57));
    setcolor(LIGHTMAGENTA);
    line(200, 200, 200+xh, yh);
    delta=delta+TPI/216000;
    sprintf(msgs, "%d", i);
//    sprintf(msgm, "%d", j);
    outtextxy(200+xs, ys, msgs);
  //  outtextxy(205+xm, ym, msgm);
    if(i==60)
    {
  //      j+=1;
        i=0;
    }

    cout<<i<<endl;
    delay(250);
    cleardevice();
    }
    getch();
    closegraph();
}
