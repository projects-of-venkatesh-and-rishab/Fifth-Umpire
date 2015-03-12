#include<stdio.h>
#include<stdlib.h>
#include<alloc.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include "package\mouse.h"
#include "package\_menu.h"
#include"package\window.h"
void main()
{
  int gd=DETECT,gm;
  int x,y,cl,mx,my;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  mx=getmaxx()/2;
  my=getmaxy()/2;
  for(x=1;x<16;x++)
  {
   gotoxy(1,1);
   printf("%d",x);
   setcolor(x);
   rectangle(0,0,639,479);
   settextjustify(CENTER_TEXT,CENTER_TEXT);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
   outtextxy(mx,my,"THANK YOU");
   settextstyle(SMALL_FONT,HORIZ_DIR,5);
   outtextxy(mx+200,my+100,"ALL COPY@RIGHTS RESERVED");

   for(y=1;y<12;y++)
   {
    gotoxy(2,1);
    printf("%d",y);
    setfillstyle(y,x);
    floodfill(620,470,x);
    delay(750);
   }
   if(!kbhit())
    break;
  }
  getch();
  closegraph();
}