#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void b_line(int l,int t,int r,int b,int c)
{
 setcolor(c);
 rectangle(l,t,r,b);
 setfillstyle(6,c);
 floodfill(l+1,t+1,c);
}
struct match
{
	char team[2][50];
	int overs,innings;
}md;
struct player
{
	int ps;
	char name[50],jno[5];
}d;
struct get_run
{
	int run,innings,c_bowler,ball,extra,score,run_player[11],wicket,c_over,i_ball[11],partnership[11],p1,p2,strike;
}r;
struct bowler_details
{
	int wicket_bowler[11],run_bowler[11],ball_bowler[11];
}bd;


void main()
{
	int gd=DETECT,i,gm,lc=6,q;
	char string[50],c,partner[10],run[10],ball[10],ai[11][25],b[11][25];
	FILE *fp,*fr,*temp,*fflag,*f_player[2];
	initgraph(&gd,&gm,"c:/turboc3/bgi");
	f_player[0]=fopen("p_det1.txt","r");
	f_player[1]=fopen("p_det2.txt","r");
	fp=fopen("match_details","r");
	fread(&md,sizeof(md),1,fp);
	fr=fopen("updaterun.txt","w");
	fclose(fr);
	fr=fopen("updaterun.txt","r");
	fflag=fopen("flag.txt","r+");
	for(i=0;i<11;i++)
	{
	fread(&d,sizeof(d),1,f_player[0]);
	strcpy(ai[i],d.name);
	fread(&d,sizeof(d),1,f_player[1]);
	strcpy(b[i],d.name);
	}
	fclose(f_player[0]);
	fclose(f_player[1]);
	/*Outer border line*/
	b_line(0,0,639,5,lc);
	b_line(0,474,639,479,lc);
	b_line(0,5,5,474,lc);
	b_line(634,5,639,474,lc);

	/*score box */
	b_line(20,55,614,60,lc);
	b_line(20,115,614,120,lc);
	b_line(20,60,25,115,lc);
	b_line(609,60,614,115,lc);

	/*Details box */
	b_line(20,125,614,130,lc);
	b_line(20,400,614,405,lc);
	b_line(20,130,25,400,lc);
	b_line(609,130,614,400,lc);

	/*Status box    */
	b_line(20,410,614,415,lc);
	b_line(20,450,614,455,lc);
	b_line(20,415,25,450,lc);
	b_line(609,415,614,4150,lc);
	//fseek(fr,0,2);
	//temp=fr;
	while(1)
	{
		q=getw(fflag);
		if(q)
		{
		setcolor(BLACK);
		settextjustify(LEFT_TEXT,CENTER_TEXT);
		settextstyle(3,0,3);
		outtextxy(32,80,"overs: ");
		strcpy(string,"\0");
		sprintf(string,"%d.%d",r.c_over,r.ball);
		outtextxy(110,82,string);
		settextstyle(4,0,4);
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		sprintf(string,"%d-%d",r.score,r.wicket);
		outtextxy(300,82,string);
		if(r.innings==0)
		{
			outtextxy(467,170,ai[r.p2]);
			outtextxy(172,170,ai[r.p1]);
		}
		else if(r.innings==1)
		{
			outtextxy(172,170,b[r.p1]);
			outtextxy(467,170,b[r.p2]);
		}
		settextjustify(LEFT_TEXT,TOP_TEXT);
		settextstyle(1,0,3);
		sprintf(run,"%d",r.run_player[r.p1]);
		sprintf(ball,"%d",r.i_ball[r.p1]);

		outtextxy(25,220,"Runs:-");
		outtextxy(25,270,"Balls:-");
		outtextxy(100,220,run);
		outtextxy(100,270,ball);

		sprintf(run,"%d",r.run_player[r.p2]);
		sprintf(ball,"%d",r.i_ball[r.p2]);
		outtextxy(400,220,"Runs:-");
		outtextxy(400,270,"Balls:-");
		outtextxy(470+20,220,run);
		outtextxy(470+20,270,ball);

		settextjustify(CENTER_TEXT,CENTER_TEXT);
		outtextxy(300,300,"Partnership");
		sprintf(partner,"%d",r.partnership[r.wicket+1]);
		outtextxy(300,320,partner);

		}
		fread(&r,sizeof(r),1,fr);
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		settextstyle(4,0,5);
		setcolor(5);
		outtextxy(320,20,"Vs");
		outtextxy(148,20,md.team[0]);
		outtextxy(488,20,md.team[1]);
		setcolor(3);
		settextjustify(LEFT_TEXT,CENTER_TEXT);
		settextstyle(3,0,3);
		outtextxy(32,80,"overs: ");
		strcpy(string,"\0");
		sprintf(string,"%d.%d",r.c_over,r.ball);
		outtextxy(110,82,string);
		settextstyle(4,0,4);
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		sprintf(string,"%d-%d",r.score,r.wicket);
		outtextxy(300,82,string);
		if(r.innings==0)
		{
			outtextxy(467,170,ai[r.p2]);
			outtextxy(172,170,ai[r.p1]);
		}
		else if(r.innings==1)
		{
			outtextxy(172,170,b[r.p1]);
			outtextxy(467,170,b[r.p2]);
		}
		settextjustify(LEFT_TEXT,TOP_TEXT);
		settextstyle(1,0,3);
		sprintf(run,"%d",r.run_player[r.p1]);
		sprintf(ball,"%d",r.i_ball[r.p1]);

		outtextxy(25,220,"Runs:-");
		outtextxy(25,270,"Balls:-");
		outtextxy(100,220,run);
		outtextxy(100,270,ball);

		sprintf(run,"%d",r.run_player[r.p2]);
		sprintf(ball,"%d",r.i_ball[r.p2]);
		outtextxy(400,220,"Runs:-");
		outtextxy(400,270,"Balls:-");
		outtextxy(470+20,220,run);
		outtextxy(470+20,270,ball);

		settextjustify(CENTER_TEXT,CENTER_TEXT);
		outtextxy(300,300,"Partnership");
		sprintf(partner,"%d",r.partnership[r.wicket]);
		outtextxy(300,320,partner);
		rewind(fflag);
	   }
}

