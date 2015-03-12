#include<stdio.h>
#include<stdlib.h>
#include<alloc.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include "R\mouse.h"
#include "NEWFOL~1\_menu.h"
#include"NEWFOL~1\window.h"
void main()
{
	int gd=DETECT,gm;
	int x,y,cl,m;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	page();
	getch();
	closegraph();
}