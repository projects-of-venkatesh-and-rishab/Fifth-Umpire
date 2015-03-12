void far *sptr1[4];
void far *sptr2[4];
void far *sptr3[4];
void far *sptr4[4];
int maxx,maxy,m;

/*functions*/
void b_line(int,int,int,int,int);

void wind(int);
void menu();
void details();
void score_card();
void analysis();
void next();
void get_details();
void link_to_details();
void page();
void hide_instructions();
int  z3=1,z1,z2,x,y,cl,con=0,mv=0,f,f1,a=300,z,b=400,t=1,nv=0,s=0;
void back_to_home()
{
		  cleardevice();
		  t=1;
		  menu(1);
		   setcolor(3);
		 outtextxy(60,187,"NEW");
 outtextxy(60,295,"CONTINUE");
 outtextxy(60,402,"EXIT");
 outtextxy(60,235,"TEAM1");
 outtextxy(60,355,"TEAM2");
// outtextxy(60,235,"LINE CHART");
// outtextxy(60,355,"BAR CHART");
}
void hide_instructions()
{
	settextjustify(LEFT_TEXT,TOP_TEXT);
	settextstyle(3,0,3);
	setcolor(BLACK);
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
}
 void link_to_details()
 {

 while(!kbhit())
 {


	mouseposi(&x,&y,&cl);
	gotoxy(10,20);
	printf("%d %d",x,y);
	if(z1)
	{
		mousehide();
		cleardevice();
		callmouse();
		got_entry(1);
		z1=0;
	}
	else if(z2)
	{
		mousehide();
		cleardevice();
		callmouse();
		got_entry(2);
		z2=0;
	}
	if(x>=105 && x<=180 && y>=435 && y<=465)
	{
		setcolor(RED);
		settextstyle(3,0,3);
		outtextxy(150,445,"TEAM1");
		if(cl==1 || cl==2)
		{
		   z1=1;
		}
	}
	else
	{
		setcolor(YELLOW);
		settextstyle(3,0,3);
		outtextxy(150,445,"TEAM1");
		outtextxy(450,445,"HOME");
		outtextxy(300,445,"TEAM2");
	}
	if(x>=260 && x<=335 && y>=435 && y<=465)
	{
		setcolor(RED);
		settextstyle(3,0,3);
		outtextxy(300,445,"TEAM2");
		if(cl==1 || cl==2)
		{
			z2=1;
		}
	}
	else
	{
		setcolor(YELLOW);
		settextstyle(3,0,3);
		outtextxy(150,445,"TEAM1");
		outtextxy(300,445,"TEAM2");
		outtextxy(450,445,"HOME");
	}
	if(x>=415 && x<=480 && y>=435 && y<=465)
	{
		setcolor(RED);
		settextstyle(3,0,3);
		outtextxy(450,445,"HOME");
		if(cl==1 || cl==2)
		{
		  z3=0;
		  mousehide();
		  cleardevice();
		  t=1;
		  menu(1);
		   setcolor(3);
		 outtextxy(60,187,"NEW");
 outtextxy(60,295,"CONTINUE");
 outtextxy(60,402,"EXIT");
 outtextxy(60,235,"TEAM1");
 outtextxy(60,355,"TEAM2");
// outtextxy(60,235,"LINE CHART");
// outtextxy(60,355,"BAR CHART");
 setcolor(BLACK);
 outtextxy(60,235,"TEAM1");
 outtextxy(60,355,"TEAM2");
		  m=2;
		  callmouse();
		  break;
		}
	}
	else
	{
		setcolor(YELLOW);
		settextstyle(3,0,3);
		outtextxy(150,445,"TEAM1");
		outtextxy(300,445,"TEAM2");
		outtextxy(450,445,"HOME");
	}

       }

 }

void b_line(int l,int t,int r,int b,int c)
{
 setcolor(c);
 rectangle(l,t,r,b);
 setfillstyle(6,c);
 floodfill(l+1,t+1,c);
}
void wind(int w)
{
  int lc=6,c=1;
  switch(w)
  {
   case 1:
	  /*outer border*/
	  b_line(0,0,639,5,lc);
	  b_line(0,474,639,479,lc);
	  b_line(0,5,5,474,lc);
	  b_line(634,5,639,474,lc);

		  /*Horizontal lines*/
	  b_line(5,70,634,75,lc);
	  b_line(5,110,634,115,lc);

	  /*Center vertical line*/
	  b_line(120,115,125,474,lc);

	  /*menu vertical lines*/
	  b_line(160,75,165,110,lc);
	  b_line(320,75,325,110,lc);
	  b_line(480,75,485,110,lc);
	  break;
   case 2:
	  /*outer border*/
	  b_line(0,0,639,5,lc);
	  b_line(0,474,639,479,lc);
	  b_line(0,5,5,474,lc);
	  b_line(634,5,639,474,lc);

	  /*Horizontal lines*/
	  b_line(5,70,634,75,lc);
	  b_line(5,110,634,115,lc);

	  /*menu vertical lines*/
	  b_line(160,75,165,110,lc);
	  b_line(320,75,325,110,lc);
	  b_line(480,75,485,110,lc);
	  break;
  }

  /*colors*/
	setfillstyle(1,5);
	floodfill(10,10,lc);
	setfillstyle(1,c);
	floodfill(10,80,lc);
	setfillstyle(1,c);
	floodfill(170,80,lc);
	setfillstyle(1,c);
	floodfill(330,80,lc);
	setfillstyle(1,c);
	floodfill(490,80,lc);
	if(w!=2)
	{
		setfillstyle(1,3);
		floodfill(10,120,lc);
	}
  /*Text*/
  setcolor(BLACK);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  settextstyle(4,0,5);
  outtextxy(320,30,"SCORE THE BOARD");
  settextstyle(1,0,2);
  outtextxy(83,88,"MENU");
  outtextxy(243,88,"DETAILS");
  outtextxy(403,88,"SCORE BOARD");
  outtextxy(563,88,"HELP");
}
void menu()
{
 wind(1);
 settextjustify(CENTER_TEXT,CENTER_TEXT);
 settextstyle(1,0,1);
 setcolor(3);
 outtextxy(60,187,"NEW");
 outtextxy(60,295,"CONTINUE");
 outtextxy(60,402,"EXIT");
 outtextxy(60,235,"TEAM1");
 outtextxy(60,355,"TEAM2");
// outtextxy(60,235,"LINE CHART");
 //outtextxy(60,355,"BAR CHART");
 setcolor(BLACK);
 outtextxy(60,187,"NEW");
 outtextxy(60,295,"CONTINUE");
 outtextxy(60,402,"EXIT");
}
void details()
{
 wind(1);
 settextjustify(CENTER_TEXT,CENTER_TEXT);
 settextstyle(1,0,1);
 setcolor(3);
 outtextxy(60,187,"NEW");
 outtextxy(60,295,"CONTINUE");
 outtextxy(60,402,"EXIT");
 outtextxy(60,235,"TEAM1");
 outtextxy(60,355,"TEAM2");
// outtextxy(60,235,"LINE CHART");
// outtextxy(60,355,"BAR CHART");
 setcolor(BLACK);
 outtextxy(60,235,"TEAM1");
 outtextxy(60,355,"TEAM2");
}
void score_card()
{
 wind(2);
}
void analysis()
{
 cleardevice();
 wind(2);
 settextjustify(CENTER_TEXT,CENTER_TEXT);
 settextstyle(1,0,1);
 setcolor(BLACK);
 outtextxy(60,187,"NEW");
 outtextxy(60,295,"CONTINUE");
 outtextxy(60,402,"EXIT");
 outtextxy(60,235,"TEAM1");
 outtextxy(60,355,"TEAM2");
// outtextxy(60,235,"LINE CHART");
// outtextxy(60,355,"BAR CHART");
// setcolor(BLACK);
// outtextxy(60,235,"LINE CHART");
// outtextxy(60,355,"BAR CHART");
}
void page()
{
 int  x,y,cl;
 wind(1);
 do
 {
	callmouse();
	mouseposi(&x,&y,&cl);
 if(t)
 {
	if(x>=45 && x<=113 && y>=82 && y<=100)
	{
	 settextstyle(1,0,2);
	 setcolor(RED);
	 outtextxy(83,88,"MENU");
	 if(cl==1 || cl==2)
	 {
	   if(mv==1)
	   {
		mousehide();
		hide_instructions();
		callmouse();
		mv=0;
		setcolor(BLACK);
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     outtextxy(555,450,"START");
	   }
	   if(con==1)
	   {
		erase_run(1);
		con=0;
	   }
	  if(s==1)
	  {
		cleardevice();
		wind(1);
		s=0;
	  }
	  m=1;
	  menu();
	}
	}
	else
	{

	 settextstyle(1,0,2);
	 setcolor(BLACK);
	 outtextxy(83,88,"MENU");
	}

	if(x>=193 && x<=280 && y>=82 && y<=100)
	{
	 settextstyle(1,0,2);
	 setcolor(RED);
	 outtextxy(243,88,"DETAILS");
	 if(cl==1 || cl==2)
	 {
	  if(mv==1)
	   {
		mousehide();
		hide_instructions();
		mv=0;
		setcolor(BLACK);
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     outtextxy(555,450,"START");
		callmouse();
	   }
	  m=2;
	  details();
	   if(con==1)
	   {
		erase_run(1);
		con=0;
	   }
	  if(s==1)
	  {
		cleardevice();
		wind(1);
		s=0;
	  }
	 }
	 }
	 else
	 {
	 settextstyle(1,0,2);
	 setcolor(BLACK);
	 outtextxy(243,88,"DETAILS");
	 }

	if(x>=328 && x<=467 && y>=82 && y<=100)
	{
	 settextstyle(1,0,2);
	 setcolor(RED);
	 outtextxy(403,88,"SCORE BOARD");

	 if(cl==1 || cl==2)
	 {
		if(mv==1)
	   {
		mousehide();
		hide_instructions();
		mv=0;
		setcolor(BLACK);
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     outtextxy(555,450,"START");
		callmouse();
	   }
		 if(con==1)
		 {
			erase_run(1);
			con=0;
		 }
		mv=0;
		mousehide();
		scoreboard();
		callmouse();
		m=3;
		s=1;
	 }
	 }
	else
	{

	 settextstyle(1,0,2);
	 setcolor(BLACK);
	 outtextxy(403,88,"SCORE BOARD");
	}

	if(x>=510 && x<=605 && y>=82 && y<=100)
	{
	 settextstyle(1,0,2);
	 setcolor(RED);
	 outtextxy(563,88,"HELP");
	 if(cl==1 || cl==2)
	 {
	  if(mv==1)
	   {
		mousehide();
		hide_instructions();
		mv=0;
		setcolor(BLACK);
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     outtextxy(555,450,"START");
		callmouse();
	   }
	    if(con==1)
	    {
		erase_run(1);
		con=0;
	    }
	  analysis();
	  if(s==1)
	  {
		cleardevice();
		wind(1);
		s=0;
	  }
	  m=4;
	 }
	}
	else
	{

	 settextstyle(1,0,2);
	 setcolor(BLACK);
	 outtextxy(563,88,"HELP");
	}
 }
	if(m==1)

	{
	  if(x>=36 && x<=83 && y>=180 && y<=200)
	  {
	   settextstyle(1,0,1);
	   setcolor(RED);
	   outtextxy(60,187,"NEW");
	   if(cl==1 || cl==2)
	   {

	    mv=1;
	    f1=1;
	   }
	    if(con==1)
	    {
		erase_run(1);
		con=0;
	    }
	  }
	  else
	  {
	   settextstyle(1,0,1);
	   setcolor(BLACK);
	   outtextxy(60,187,"NEW");
	  }
	  if(x>=13 && x<=105 && y>=280 && y<=310)
	  {
	   settextstyle(1,0,1);
	   setcolor(RED);
	   outtextxy(60,295,"CONTINUE");
	   if(cl==1 || cl==2)
	   {
	    if(mv==1)
	   {

		mousehide();
		hide_instructions();
		mv=0;
		setcolor(BLACK);
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     outtextxy(555,450,"START");
		callmouse();
	   }
	      con=1;
	     run_box();
	   }
	  }
	  else
	  {
	   settextstyle(1,0,1);
	   setcolor(BLACK);
	   outtextxy(60,295,"CONTINUE");
	  }
	/*  if(x>=36 && x<=85 && y>=325 && y<=345)
	  {
	   settextstyle(1,0,1);
	   setcolor(RED);
	   outtextxy(60,331,"HELP");
	  }
	  else
	  {
	   settextstyle(1,0,1);
	   setcolor(BLACK);
	   outtextxy(60,331,"HELP");
	  }*/
	  if(x>=36 && x<=85 && y>=395 && y<=415)
	  {
	   settextstyle(1,0,1);
	   setcolor(RED);
	   outtextxy(60,402,"EXIT");
	   if(cl==1 || cl==2)
	   {

	    exit_menu();
	   }
	  }
	  else
	  {
	   settextstyle(1,0,1);
	   setcolor(BLACK);
	   outtextxy(60,402,"EXIT");
	  }
	}
	else if(m==2)
	{
	  if(x>=28 && x<=85 && y>=230 && y<=250)
	  {
	   settextstyle(1,0,1);
	   setcolor(RED);
	   outtextxy(60,235,"TEAM1");
	   if(cl==1 || cl==2)
	   {
	     t=0;
	     m=0;
	     z1=1;
	     z=1;
	     link_to_details();
	   }
	   }
	  else
	  {

	   settextstyle(1,0,1);
	   setcolor(BLACK);
	   outtextxy(60,235,"TEAM1");
	  }
	  if(x>=28 && x<=85 && y>=350 && y<=370)
	  {
	   settextstyle(1,0,1);
	   setcolor(RED);
	   outtextxy(60,355,"TEAM2");
	   if(cl==1 || cl==2)
	   {
	   t=0;
	   z2=1;
	   z=1;
	   m=0;
	   link_to_details();
	   }
	  }
	  else
	  {
	   settextstyle(1,0,1);
	   setcolor(BLACK);
	   outtextxy(60,355,"TEAM2");
	  }
	}
	else if(m==4)
	{
	  /*if(x>=6 && x<=113 && y>=230 && y<=250)
	  {
	   settextstyle(1,0,1);
	   setcolor(RED);
	   outtextxy(60,235,"LINE CHART");
	  }
	  else
	  {
	   settextstyle(1,0,1);
	   setcolor(BLACK);
	   outtextxy(60,235,"LINE CHART");
	  }
	  if(x>=6 && x<=113 && y>=350 && y<=370)
	  {
	   settextstyle(1,0,1);
	   setcolor(RED);
	   outtextxy(60,355,"BAR CHART");
	  }
	  else
	  {
	   settextstyle(1,0,1);
	   setcolor(BLACK);
	   outtextxy(60,355,"BAR CHART");
	  } */
	}
	if(mv==1)
	{
	    char t1[100],t2[100];
	    int o;
	    if(f1)
	    {
	     new_menu();
	     f1=0;
	    }
	    if(x>=510 && x<=590 && y>=435 && y<=460)
	    {
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     setcolor(GREEN);
	     outtextxy(555,450,"START");
	     if(cl==1 || cl==2)
	     {
		m=0;
		t=0;
		mv=0;
		mousehide();
		new_sub();
		setposi(&a,&b);
		callmouse();
		nv=1;
	     }
	    }
	    else
	    {
	     setcolor(RED);
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     outtextxy(555,450,"START");
	    }
	}
       if(nv)
       {
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	if(x>=530 && x<=575 && y>=440 && y<=460)
	{
	  setcolor(RED);
	  outtextxy(555,450,"NEXT");
	  if(cl==1 || cl==2)
	  {
		cleardevice();
		put_entry();
		nv=0;
		callmouse();
		t=1;
	  }
	}
	else
	{
		setcolor(GREEN);
		outtextxy(555,450,"NEXT");
	}
       }

      gotoxy(60,20);
      printf("%d %d",x,y);
      delay(7);
      mousehide();
  }while(!kbhit());
}


