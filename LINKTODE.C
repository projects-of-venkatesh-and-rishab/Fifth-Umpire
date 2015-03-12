 void link_to_details()
 {
 int z3=1;
 while(z3)
 {

	callmouse();
	if(z1)
	{
		cleardevice();
		got_entry(1);
		z1=0;
	}
	else if(z2)
	{
		cleardevice();
		got_entry(2);
		z2=0;
	}
	if(x>=530 && x<=575 && y>=440 && y<=460)
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
	if(x>=530 && x<=575 && y>=440 && y<=460)
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
	if(x>=530 && x<=575 && y>=440 && y<=460)
	{
		setcolor(RED);
		settextstyle(3,0,3);
		outtextxy(450,445,"HOME");
		if(cl==1 || cl==2)
		{
		  z3=0;
		  cleardevice();
		  menu(1);
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