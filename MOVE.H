#include<stdio.h>
#include<dos.h>
#include<graphics.h>
void display()
{
 int gd=DETECT,gm,i;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  for(i=0;i<640;i++)
  {

  settextjustify(CENTER_TEXT,CENTER_TEXT);
  settextstyle(4,0,0);
  outtextxy(320+i,30,"SCORE THE BOARD");
  delay(10);
  cleardevice();

/*  settextjustify(CENTER_TEXT,CENTER_TEXT);
  settextstyle(4,0,0);
  outtextxy(320+i,30,"SCORE THE BOARD");
  cleardevice();
  delay(10);
  */
  }
  if(i==640)
  {
  l1: for(i=0;i<640;i++)
  {

  settextjustify(CENTER_TEXT,CENTER_TEXT);
  settextstyle(4,0,0);
  outtextxy(0+i,30,"SCORE THE BOARD");
  delay(10);
  cleardevice();

/*
   settextjustify(CENTER_TEXT,CENTER_TEXT);
  settextstyle(4,0,0);
  outtextxy(0+i,30,"SCORE THE BOARD");
  cleardevice();
  delay(10);   */
  }
  if(i==640)
  goto l1;
 }
}


