#include<stdio.h>
#include<graphics.h>
struct get_run
{
	int run,ball,extra,score,run_player[11],wicket,c_over,i_ball[11];
}r;

void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
/*FILE *f=fopen("updaterun.txt","r");*/
setcolor(4);
line(115,120,115,440);
line(115,440,620,440);
setcolor(8);
for(i=0;i<=510;i+=17)
line(132+i,440,132+i,445);
setcolor(12);
for(i=320;i>=0;i-=10)
line(115,440-i,110,440-i);
/*
moveto(115,440);
for(i=0;i<=r.score;i+=10)
{
fread(&r,sizeof(r),1,f);
lineto(r.ball,r.score);
}  */
getch();
closegraph();
}
