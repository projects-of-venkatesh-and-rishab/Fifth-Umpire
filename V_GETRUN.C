#include<stdio.h>
#include<stdlib.h>
struct get_run
{
 int run,ball,extra,score,i_ball[2];
}r;
int main()
{
    int o,i,b,flag=0,strike=0,r1=0,r2=0,wicket=0,nrun=0,wrun=0;
    char c[4];
    clrscr();
    printf("\nEnter the no of overs:");
    scanf("%d",&o);
    r.i_ball[0]=0;
    r.i_ball[1]=0;
    for(i=0;i<o;)
    {
	strike=!strike;
	gotoxy(40,5);
	printf("\nEnter the runs for over no %d:\n",i+1);
	for(r.ball=1;r.ball<=6;r.ball++)
	{
	    do
	    {

		scanf("%s",&c);
		if((c[0]>=48 && c[0]<=54 && !isdigit(c[1])) || (c[0]=='w' || c[0]=='n'))
		{
		    if((c[1]=='w' && c[2]=='d' && c[3]=='\0') || (c[1]=='n' && c[2]=='b' && c[3]=='\0'))
		    {
			if(c[1]=='n' && c[2]=='b' && c[3]=='\0')
			{
				nrun=c[0]-48;
				r.extra=1;
				r.run=0;
				r.ball--;
			}
			else
			{
				wrun=c[0]-48;
				r.extra=c[0]-48+1;
				r.run=0;
				r.ball--;
			}
		    }
		    else if((c[0]=='w' && c[1]=='d' && c[2]=='\0') || (c[0]=='n' && c[1]=='b' && c[2]=='\0'))
		    {
			r.extra=1;
			r.run=0;
			r.ball--;
		    }
		    else if(c[0]=='w' && c[1]=='\0')
		    {
			wicket++;
		    }
		    else
		    {
			r.run=c[0]-48;
			r.extra=0;
		    }
		    flag=0;
		}
		else
		{
		    printf("\nWRONG:");
		    flag=1;
		}
	    }while(flag);
	    if(strike)
	    {
		r.score+=r.run+r.extra+nrun;
		r1+=r.run+nrun;
		r.i_ball[0]++;
		if(r.run%2 || nrun%2 || wrun%2)
		  strike=0;
		else
		  strike=1;
	    }
	    else
	    {
		r.score+=r.run+r.extra+nrun;
		r2+=r.run+nrun;
		r.i_ball[1]++;
		if(r.run%2 || nrun%2 || wrun%2)
		  strike=1;
		else
		  strike=0;
	    }
	    if(r.ball==6)
	    {
	     i++;
	     r.ball=0;
	     gotoxy(40,20);
	     printf("\novers:%d-%d",i,r.ball);
	     printf("\nScore:%d-%d",r.score,wicket);
	     printf("\nplayer1 :%d (%d)",r1,r.i_ball[0]);
	     printf("\nplayer2 :%d (%d)",r2,r.i_ball[1]);
	     break;
	    }
	    gotoxy(40,20);
	    printf("\novers:%d-%d",i,r.ball);
	    printf("\nScore:%d-%d",r.score,wicket);
	    printf("\nplayer1 :%d (%d)",r1,r.i_ball[0]);
	    printf("\nplayer2 :%d (%d)",r2,r.i_ball[1]);
	    nrun=0;
	    wrun=0;
	}
    }
    printf("\nFinal Score:-");
    printf("\novers:%d-%d",i,r.ball);
    printf("\nScore:%d-%d",r.score,wicket);
    printf("\nplayer1 :%d (%d)",r1,r.i_ball[0]);
    printf("\nplayer2 :%d (%d)",r2,r.i_ball[1]);
    getch();
    return 0;
}
