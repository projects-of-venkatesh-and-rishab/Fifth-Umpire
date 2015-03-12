void exit_menu();
void new_sub();
void back_to_home();
int readch();
void put_entry();
void got_entry(int);
void scoreboard();
void b_line(int,int,int,int,int);
void wind(int);
void run_box();
void erase_run(int);
void print_bowler(int);
int q;
char sover[10];
int bowler=0;
void erase_run(int i)
{
	int n;
	for(n=0;n<6;n++)
	{
		settextjustify(LEFT_TEXT,TOP_TEXT);
		setcolor(BLACK);
		outtextxy(200+n*50,200,"1");
		outtextxy(200+n*50,200,"2");
		outtextxy(200+n*50,200,"3");
		outtextxy(200+n*50,200,"4");
		outtextxy(200+n*50,200,"5");
		outtextxy(200+n*50,200,"6");
		outtextxy(200+n*50,200,"w");
		outtextxy(200+n*50,200,"wd");
		outtextxy(200+n*50,200,"nb");
		outtextxy(200+n*50,200,"1wd");
		outtextxy(200+n*50,200,"2wd");
		outtextxy(200+n*50,200,"3wd");
		outtextxy(200+n*50,200,"4wd");
		outtextxy(200+n*50,200,"5wd");
		outtextxy(200+n*50,200,"6wd");
		outtextxy(200+n*50,200,"1nb");
		outtextxy(200+n*50,200,"2nb");
		outtextxy(200+n*50,200,"3nb");
		outtextxy(200+n*50,200,"4nb");
		outtextxy(200+n*50,200,"5nb");
		outtextxy(200+n*50,200,"6nb");

	}
	if(i==1)
	{
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		outtextxy(260,140,sover);
		outtextxy(200,140,"OVERS : ");
	}
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
	int run,c_bowler,innings,ball,extra,score,run_player[11],wicket,c_over,i_ball[11],partnership[11],p1,p2,strike;
}r;
struct bowler_details
{
	int wicket_bowler[11],run_bowler[11],ball_bowler[11];
}bd;

void print_bowler(int in)
{
	int x,y,cl,k;
	char y_n;
	FILE *bowl[2];
	bowl[0]=fopen("p_det1.txt","r+");
	bowl[1]=fopen("p_det2.txt","r+");

		for(k=0;k<11;k++)
		{
			fread(&d,sizeof(d),1,bowl[!in]);
			setcolor(BLACK);
			if(k<4)
			outtextxy(140,250+(k*30),d.name);
			else if(k>=4 && k<8)
			outtextxy(300,250+((k-4)*30),d.name);
			else if(k>=8 && k<11)
			outtextxy(460,250+((k-8)*30),d.name);
		}
		for(k=0;k<11;k++)
		{
			fread(&d,sizeof(d),1,bowl[!in]);
			setcolor(YELLOW);
			if(k<4)
			outtextxy(140,250+(k*30),d.name);
			else if(k>=4 && k<8)
			outtextxy(300,250+((k-4)*30),d.name);
			else if(k>=8 && k<11)
			outtextxy(460,250+((k-8)*30),d.name);
		}
		while(1)
		{
		while(1)
		{
			callmouse();
			mouseposi(&x,&y,&cl);
			if(x>=135 && x<=280 && y>=250 && y<=275)
			{
				if(cl==1 || cl==2)
				{
					bowler=0;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=135 && x<=280 && y>=280 && y<=305)
			{
				if(cl==1 || cl==2)
				{
					bowler=1;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=135 && x<=280 && y>=310 && y<=335)
			{
				if(cl==1 || cl==2)
				{
					bowler=2;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=135 && x<=280 && y>=340 && y<=365)
			{
				if(cl==1 || cl==2)
				{
					bowler=3;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=295 && x<=440 && y>=250 && y<=275)
			{
				if(cl==1 || cl==2)
				{
					bowler=4;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=295 && x<=440 && y>=280 && y<=305)
			{
				if(cl==1 || cl==2)
				{
					bowler=5;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=295 && x<=440 && y>=310 && y<=335)
			{
				if(cl==1 || cl==2)
				{
					bowler=6;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=295 && x<=440 && y>=340 && y<=365)
			{
				if(cl==1 || cl==2)
				{
					bowler=7;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=455 && x<=600 && y>=250 && y<=275)
			{
				if(cl==1 || cl==2)
				{
					bowler=8;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=455 && x<=600 && y>=280 && y<=305)
			{
				if(cl==1 || cl==2)
				{
					bowler=9;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			if(x>=455 && x<=600 && y>=310 && y<=335)
			{
				if(cl==1 || cl==2)
				{
					bowler=10;
					outtextxy(200,400,"BOWLER SELECTED");
					break;
				}
			}
			gotoxy(60,20);
			printf("%d %d",x,y);
		}
		y_n='\0';
		outtextxy(165,440,"Do you like to change(\"press Y\") else (\"press N\")");
		y_n=getch();
		if(islower(y_n))
			y_n=toupper(y_n);
		if(y_n=='Y')
		{
			setcolor(BLACK);
			outtextxy(200,400,"BOWLER SELECTED");
			outtextxy(165,440,"Do you like to change(\"press Y\") else (\"press N\")");
			continue;

		}
		else if(y_n=='N');
		{
				setcolor(BLACK);
				outtextxy(165,440,"Do you like to change(\"press Y\") else (\"press N\")");
				break;
		}
		}
}


void exit_menu()
{
	int mx,my;
	mousehide();
	clrscr();
	cleardevice();
	mx=getmaxx()/2;
	my=getmaxy()/2;
	floodfill(10,10,9);
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(mx,my,"THANK YOU");
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(mx+200,my+100,"ALL COPY@RIGHTS RESERVED");
	getch();
	exit(1);
}
void new_menu()
{

	setcolor(RED);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(555,450,"START");
	settextjustify(LEFT_TEXT,TOP_TEXT);
	settextstyle(3,0,3);
	setcolor(7);
	outtextxy(152,120,"Step:-1");
	settextstyle(3,0,1);
	outtextxy(180,145,"Enter the team names and also the no.of overs ");
	outtextxy(180,165,"to be played.");
	outtextxy(152,195,"Step:-2");
	outtextxy(180,215,"Enter the \"1st team\" details with their respective ");
	outtextxy(180,235,"jersey number and their specialisation" );
	outtextxy(152,265,"Step:-3");
	outtextxy(180,285,"Enter the \"2nd team\" details with their respective");
	outtextxy(180,305,"jersey number and their specialisation");
	settextjustify(CENTER_TEXT,CENTER_TEXT);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);

}
void new_sub()
{
	int x,y,length,cl,nv,nev,o,i;
	char t1[100],t2[100],error[]="WRONG INPUT";
	FILE *fp;
	fp=fopen("match_details","w");
	cleardevice();
	settextstyle(3,HORIZ_DIR,3);
	outtextxy(320,40," STEP 1");
	outtextxy(320,55,"========");
	settextstyle(3,HORIZ_DIR,1);
	outtextxy(90,162,"NAME OF TEAM1:   ");
	outtextxy(90,209,"NAME OF TEAM2:   ");
	outtextxy(90,256,"NO.OF OVERS  :   ");
	gotoxy(28,11);
	setcolor(14);
	outtextxy(180,165,"=>");
	scanf("%s",md.team[0]);
	setcolor(14);
	outtextxy(180,210,"=>");
	setcolor(BLACK);
	outtextxy(180,165,"=>");
	gotoxy(28,14);
	scanf("%s",md.team[1]);
	while(1)
	{
	if(!strcmp(md.team[0],md.team[1]))
	{
		setcolor(RED);
		outtextxy(320,400,error);
		gotoxy(28,14);
		length=strlen(md.team[1]);
		strcpy(md.team[1],"\0");
		for(i=0;i<length;i++)
			printf(" ");
		gotoxy(28,14);
		scanf("%s",md.team[1]);

	}
	else
	{
		setcolor(BLACK);
		outtextxy(320,400,error);

		break;
	}

	}
	setcolor(14);
	outtextxy(180,260,"=>");
	setcolor(BLACK);
	outtextxy(180,165,"=>");
	outtextxy(180,210,"=>");
	gotoxy(28,17);
	length=scanf("%d",&md.overs);
	fflush(stdin);
	while(1)
	{
	if(length!=1)
	{
		gotoxy(28,17);
		printf("             ");
		setcolor(RED);
		outtextxy(320,400,error);
		gotoxy(28,17);
		length=scanf("%d",&md.overs);
	}
	else
	{
			setcolor(BLACK);
		outtextxy(320,400,error);
		break;
	}
	}
	md.innings=0;
	fwrite(&md,sizeof(md),1,fp);
	fclose(fp);
}
int readch()
{
 char c;
 if(kbhit())
 {
	c=getch();
	if(c==13)
		return 0;
	else
		return 1;
 }
 else
	return 1;
}
void put_entry()
{
	int cl,a=50,x,y,b=30,flag=1,k,i,j,s,g,l=0,length,fjno=1;
	char r[100],n[11][50],jn[12][5],c,error[]="wrong input";
	FILE *f[2],*fp;
	f[0]=fopen("p_det1.txt","w");
	f[1]=fopen("p_det2.txt","w");
	fp=fopen("match_details","r");
	fread(&md,sizeof(md),1,fp);
	setposi(&a,&b);
	callmouse();
	mouseposi(&x,&y,&cl);
	setcolor(GREEN);
	settextstyle(3,0,4);
	settextjustify(CENTER_TEXT,CENTER_TEXT);

	for(j=0;j<2;j++)
	{
		cleardevice();
		setposi(&a,&b);
		callmouse();
		setcolor(YELLOW);
		settextstyle(3,0,2);
		outtextxy(100,30,"Name ");
		outtextxy(300,30,"Jersey no.");
		outtextxy(570,30,"Specialisation");
		settextstyle(SMALL_FONT,0,4);
		outtextxy(530,45,"B");
		outtextxy(560,45,"Bo");
		outtextxy(590,45,"W");
		outtextxy(610,45,"A");
		outtextxy(300,10,md.team[j]);

		for(i=0,l=0;i<22;i+=2,l++)
		{
			fflush(stdin);
			gotoxy(7,5+i);
			for(s=0;s<22;s+=2)
			{
				setcolor(BLACK);
				outtextxy(38,65+(s*16.5),"=>");
				setcolor(BLACK);
				outtextxy(263,65+(s*16.5),"=>");
			}
			setcolor(14);
			outtextxy(38,65+(i*16.5),"=>");
			gets(d.name);
			fflush(stdin);
			strcpy(n[l],d.name);

			while(flag)
			{
			  for(s=0;s<22;s+=2)
			{
			setcolor(BLACK);
			outtextxy(38,65+(s*16.5),"=>");
			setcolor(BLACK);
			outtextxy(263,65+(s*16.5),"=>");
			}
			  setcolor(14);
			  outtextxy(263,65+(i*16.5),"=>");
			  gotoxy(35,5+i);
			  scanf("%s",d.jno);
			  strcpy(jn[l],d.jno);
			  length=strlen(d.jno);
			  for(g=0;g<length;g++)
			  {
				if(!isdigit(jn[l][g]))
				{
					setcolor(RED);
					outtextxy(300,400,error);
					fjno=0;
					flag=1;
					strcpy(jn[l],"\0");
					gotoxy(35,5+i);
					printf("              ");
					break;
				}
			  }
			  if(g==length)
			  {
				flag=0;
				fjno=1;
				setcolor(BLACK);
				outtextxy(300,400,error);
			  }

			  if(fjno)
			  {

			  for(k=0;k<l;k++)
			  {
			   if(strcmp(jn[k],d.jno)==0)
			    {
				setcolor(RED);
				outtextxy(300,400,error);
				gotoxy(35,5+i);
			     printf("           ");
			     gotoxy(35,5+i);
			     scanf("%s",d.jno);
			     break;
			    }
			  }
			  if(k==l)
			  {
				setcolor(BLACK);
				outtextxy(300,400,error);
				flag=0;
			  }
			  else
				flag=1;
			  }
			}
			setcolor(YELLOW);
			circle(530,61+(i*16.5),5);
			circle(560,61+(i*16.5),5);
			circle(590,61+(i*16.5),5);
			circle(610,61+(i*16.5),5);
			do
			{
				mouseposi(&x,&y,&cl);
				if(x>525 && x<535 && y>((61+(i*16.5)-5)) && y<((61+(i*16.5)+5)))
				{
					if(cl==1 || cl==2)
					{
						d.ps=1;
						setfillstyle(1,BLACK);
						setcolor(BLACK);
						circle(530,((61+(i*16.5))),2);
						fillellipse(530,((61+(i*16.5))),2,2);
						circle(560,((61+(i*16.5))),2);
						fillellipse(560,((61+(i*16.5))),2,2);
						circle(590,((61+(i*16.5))),2);
						fillellipse(590,((61+(i*16.5))),2,2);
						circle(610,((61+(i*16.5))),2);
						fillellipse(610,((61+(i*16.5))),2,2);
						setfillstyle(1,2);
						setcolor(YELLOW);
						mousehide();
						circle(530,((61+(i*16.5))),2);
						fillellipse(530,((61+(i*16.5))),2,2);
						callmouse();
					}
				}
				else if(x>555 && x<565  && y>((61+(i*16.5)-5))  && y<((61+(i*16.5)+5))   )
				{
					if(cl==1 || cl==2)
					{
						d.ps=2;
						setfillstyle(1,BLACK);
						setcolor(BLACK);
						circle(530,((61+(i*16.5))),2);
						fillellipse(530,((61+(i*16.5))),2,2);
						circle(560,((61+(i*16.5))),2);
						fillellipse(560,((61+(i*16.5))),2,2);
						circle(590,((61+(i*16.5))),2);
						fillellipse(590,((61+(i*16.5))),2,2);
						circle(610,((61+(i*16.5))),2);
						fillellipse(610,((61+(i*16.5))),2,2);
						setfillstyle(1,2);
						setcolor(YELLOW);
						mousehide();
						circle(560,((61+(i*16.5))),2);
						fillellipse(560,((61+(i*16.5))),2,2);
						callmouse();
					}
				}
				else if(x>585 && x<595 && y>((61+(i*16.5)-5)) && y<((61+(i*16.5)+5))  )
				{
					if(cl==1 || cl==2)
					{
						d.ps=3;
						setfillstyle(1,BLACK);
						setcolor(BLACK);
						circle(530,((61+(i*16.5))),2);
						fillellipse(530,((61+(i*16.5))),2,2);
						circle(560,((61+(i*16.5))),2);
						fillellipse(560,((61+(i*16.5))),2,2);
						circle(590,((61+(i*16.5))),2);
						fillellipse(590,((61+(i*16.5))),2,2);
						circle(610,((61+(i*16.5))),2);
						fillellipse(610,((61+(i*16.5))),2,2);
						setfillstyle(1,2);
						setcolor(YELLOW);
						mousehide();
						circle(590,((61+(i*16.5))),2);
						fillellipse(590,((61+(i*16.5))),2,2);
						callmouse();
					}
				}
				else if(x>605 && x<615 && y>((61+(i*16.5)-5)) && y<((61+(i*16.5)+5)))
				{
					if(cl==1 || cl==2)
					{
						d.ps=4;
						setfillstyle(1,BLACK);
						setcolor(BLACK);
						circle(530,((61+(i*16.5))),2);
						fillellipse(530,((61+(i*16.5))),2,2);
						circle(560,((61+(i*16.5))),2);
						fillellipse(560,((61+(i*16.5))),2,2);
						circle(590,((61+(i*16.5))),2);
						fillellipse(590,((61+(i*16.5))),2,2);
						circle(610,((61+(i*16.5))),2);
						fillellipse(610,((61+(i*16.5))),2,2);
						setfillstyle(1,2);
						setcolor(YELLOW);
						mousehide();
						circle(610,((61+(i*16.5))),2);
						fillellipse(610,((61+(i*16.5))),2,2);
						callmouse();
					}
				}
			}while(readch());
		       /*	printf("\n%s %d %d",d.name,d.jno,d.ps);*/
			fwrite(&d,sizeof(d),1,f[j]);
			flag=1;
		}
		mousehide();
	}
	fclose(f[0]);
	fclose(f[1]);
	back_to_home();

}
void got_entry(int t)
{
	int n,i;
	FILE *f[2];
	f[0]=fopen("p_det1.txt","r");
	f[1]=fopen("p_det2.txt","r");
	cleardevice();
	setcolor(YELLOW);
	settextstyle(3,0,2);
	outtextxy(100,30,"Name ");
	outtextxy(300,30,"Jersey no.");
	outtextxy(570,30,"Specialisation");
	for(i=1;i<=22;i+=2)
	{
		fread(&d,sizeof(d),1,f[t-1]);
		outtextxy(100,(61+(i*16.5)),d.name);
		outtextxy(300,(61+(i*16.5)),d.jno);
		switch(d.ps)
		{
		case 1:
		outtextxy(570,(61+(i*16.5)),"BATSMAN");
		break;
		case 2:
		outtextxy(570,(61+(i*16.5)),"BOWLER");
		break;
		case 3:
		outtextxy(570,(61+(i*16.5)),"WKT-KEPR");
		break;
		case 4:
		outtextxy(570,(61+(i*16.5)),"ALL-ROUNDER");
		break;
		}
	}
	fclose(f[0]);
	fclose(f[1]);
}
void scoreboard()
{
	int i,lc=6,q;
	char string[50],c,partner[10],run[10],ball[10],ai[11][25],b[11][25];
	FILE *fp,*fr,*temp,*fflag,*f_player[2];
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


	cleardevice();
	wind(2);
    /*	b_line(0,0,639,5,lc);
	b_line(0,474,639,479,lc);
	b_line(0,5,5,474,lc);
	b_line(634,5,639,474,lc);*/

	settextjustify(CENTER_TEXT,CENTER_TEXT);
	settextstyle(4,0,5);
	setcolor(5);
	outtextxy(320,125,"Vs");
	outtextxy(148,125,md.team[0]);
	outtextxy(488,125,md.team[1]);
	b_line(20,160,614,165,lc);
	b_line(20,200,614,205,lc);
	b_line(20,165,25,200,lc);
	b_line(609,165,614,200,lc);
	b_line(20,215,614,220,lc);
	b_line(20,400,614,405,lc);
	b_line(20,220,25,400,lc);
	b_line(609,220,614,400,lc);
	b_line(20,410,614,415,lc);
	b_line(20,450,614,455,lc);
	b_line(20,415,25,450,lc);
	b_line(609,415,614,450,lc);
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
		outtextxy(32,180,"overs: ");
		strcpy(string,"\0");
		sprintf(string,"%d.%d",r.c_over,r.ball);
		outtextxy(110,182,string);
		settextstyle(4,0,4);
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		sprintf(string,"%d-%d",r.score,r.wicket);
		outtextxy(300,182,string);
		if(r.innings==0)
		{
			outtextxy(467,250,ai[r.p2]);
			outtextxy(172,250,ai[r.p1]);
		}
		else if(r.innings==1)
		{
			outtextxy(172,250,b[r.p1]);
			outtextxy(467,250,b[r.p2]);
		}
		settextjustify(LEFT_TEXT,TOP_TEXT);
		settextstyle(1,0,3);
		sprintf(run,"%d",r.run_player[r.p1]);
		sprintf(ball,"%d",r.i_ball[r.p1]);

		outtextxy(25,300,"Runs:-");
		outtextxy(25,350,"Balls:-");
		outtextxy(100,300,run);
		outtextxy(100,350,ball);

		sprintf(run,"%d",r.run_player[r.p2]);
		sprintf(ball,"%d",r.i_ball[r.p2]);
		outtextxy(400,300,"Runs:-");
		outtextxy(400,350,"Balls:-");
		outtextxy(470+20,300,run);
		outtextxy(470+20,350,ball);

		settextjustify(CENTER_TEXT,CENTER_TEXT);
		outtextxy(300,350,"Partnership");
		sprintf(partner,"%d",r.partnership[r.wicket]);
		outtextxy(300,370,partner);
		rewind(fflag);
	fclose(fp);
}
void run_box()
{
	int o,i,b,a,flag=0,nrun=0,iball=0,wrun=0,j,m,q=0,k,w,partner=0,p3=2;
	char y_n,c[6],error[]="wrong input";
	FILE *f=fopen("match_details","r"),*fp,*fflag=fopen("flag.txt","w");
	putw(q,fflag);
	r.p1=0;
	r.p2=1;
	settextstyle(1,0,1);
	fclose(fflag);
	fread(&md,sizeof(md),1,f);
	outtextxy(200,140,"OVERS : ");
	r.ball=0;
	r.innings=0;
	for(i=0;i<11;i++)
	{
	    r.run_player[i]=0;
	    r.i_ball[i]=0;
	    r.partnership[i]=0;
	    bd.wicket_bowler[i]=0;
	    bd.run_bowler[i]=0;
	    bd.ball_bowler[i]=0;
	}
	r.score=0;
	for(i=1;(i<=md.overs && r.wicket!=10);i++)
	{
		erase_run(0);
		r.strike=!r.strike;
		r.c_bowler=bowler;
		print_bowler(r.innings);
		for(r.ball=1,a=30,m=0;r.ball<=6;r.ball++,a+=9,m++)
		{

			if(m==6)
			{
				m=0;
				erase_run(0);
			}
			if(flag==0)
			{
				setcolor(BLACK);
				outtextxy(200,450,error);
			}
			settextjustify(CENTER_TEXT,CENTER_TEXT);
			setcolor(BLACK);
			outtextxy(260,140,sover);
			setcolor(YELLOW);
			fp=fopen("updaterun.txt","a");
			strcpy(sover,"\0");
			sprintf(sover,"%d.%d",r.c_over,r.ball);
			outtextxy(260,140,sover);
			do
			{
				settextjustify(LEFT_TEXT,TOP_TEXT);
				if(flag==1)
				{
					setcolor(BLACK);
					outtextxy(200+m*50,200,c);
				}
				gotoxy(a,15);
				j=0;
				c[j]='\0';
				setcolor(2);
				do
				{
					flag=0;
					c[j]=getch();
					if(c[j]==8 && j!=0)
					{
						setcolor(BLACK);
						outtextxy(200+m*50,200,c);
						j--;
						c[j]='\0';
						setcolor(2);
					}
					else
					{
						c[j+1]='\0';
						j++;
					}
					outtextxy(200+m*50,200,c);
				}while(c[j-1]!=13);
				if((c[0]>=48 && c[0]<=54 && !isdigit(c[1])) || (c[0]=='w' || c[0]=='n'))
				{
					if(flag==1)
					{
						outtextxy(200,450,error);
						setcolor(BLACK);
						outtextxy(200+m*50,200,c);
					}
					if((c[1]=='w' && c[2]=='d' && (c[3]=='\0' || c[3]==13)) ||  (c[1]=='n' && c[2]=='b' && (c[3]=='\0' || c[3]==13)))
					{
						if(c[1]=='n' && c[2]=='b' && (c[3]=='\0' || c[3]==13))
						{
							nrun=c[0]-48;
							r.extra=1;
							r.run=0;
							r.ball--;
						}
						else
						{
							r.extra=c[0]-48+1;
							r.run=0;
							r.ball--;
						}
						flag=0;
					}
					else if((c[0]=='w' && c[1]=='d' && (c[2]=='\0' || c[2]==13)) || (c[0]=='n' && c[1]=='b' && (c[2]=='\0' || c[2]==13)))
					{
						r.extra=1;
						r.run=0;
						r.ball--;
							flag=0;
					}
					else if(c[0]=='w' && (c[1]=='\0' || c[1]==13))
					{
						r.wicket++;
						flag=0;
						iball=1;
						if(r.strike)
						{
							r.p1=p3;
							p3++;
						}
						else
						{
						       r.p2=p3;
							p3++;
						}
					}
					else if(c[0]>=48 && c[0]<=54 && (c[1]=='\0' || c[1]==13))
					{
						r.run=c[0]-48;
						r.extra=0;
						flag=0;

					}
					else
						flag=1;
				}
				else
				{
					outtextxy(200,450,error);
					flag=1;
				}
			}while(flag);
			if(r.strike)
			{
				r.score+=r.run+r.extra+nrun;
				r.run_player[r.p1]+=r.run+nrun;
				if(!iball)
					r.i_ball[r.p1]++;
				iball=0;
				if(r.run%2 || nrun%2 || wrun%2)
					r.strike=0;
				else
					r.strike=1;

			}
			else
			{
				r.score+=r.run+r.extra+nrun;
				r.run_player[r.p2]+=r.run+nrun;
				if(!iball)
					r.i_ball[r.p2]++;
				iball=0;
				if(r.run%2 || nrun%2 || wrun%2)
					r.strike=1;
				else
					r.strike=0;

			}
			if(r.wicket!=0)
			{
				partner=0;
				for(i=0;i<r.wicket;i++)
				{
					partner+=r.partnership[i];
					r.partnership[r.wicket]=r.score-partner;

				}
			 }
			else
				r.partnership[r.wicket]=r.score;
			fflag=fopen("flag.txt","r+");
			q=1;
			putw(q,fflag);
			fclose(fflag);
			delay(35);
			fwrite(&r,sizeof(r),1,fp);
			fclose(fp);
			delay(35);
			fflag=fopen("flag.txt","r+");
			q=0;
			putw(q,fflag);
			fclose(fflag);
			r.run=0;
			r.extra=0;
				if(r.wicket==10)
	{
	  r.score=0;
	  r.wicket=0;
	  r.innings=1;
	  for(i=0;i<11;i++)
	{
	    r.run_player[i]=0;
	    r.i_ball[i]=0;
	    r.partnership[i]=0;
	    bd.wicket_bowler[i]=0;
	    bd.run_bowler[i]=0;
	    bd.ball_bowler[i]=0;
	}
	r.ball=0;
	r.c_over=0;
	}
		}
		r.c_over++;


	}

	settextjustify(CENTER_TEXT,CENTER_TEXT);
	settextstyle(1,0,1);
}






