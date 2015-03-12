#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,i;
	FILE *f;
	f=fopen("updaterun.txt","r");
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	line(115,120,115,440);
	line(115,440,620,440);
	for(i=0;i<=510;i+=100)
		line(115+i,440,115+i,445);
	for(i=320;i>=0;i-=70)
		line(115,480-i,110,48	0-i);
	getch();
	closegraph();
}