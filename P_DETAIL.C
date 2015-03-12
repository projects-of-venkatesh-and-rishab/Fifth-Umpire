#include<stdio.h>
#include<conio.h>
struct match
{
	char team[2][50];
	int overs;
}md;
struct player
{
	int jno,ps;
	char name[50];
}d;
void main()
{
	int n,b=0,j;
	register int i;
	FILE *f[2];
	clrscr();
	f[0]=fopen("p_det1.txt","r");
	f[1]=fopen("p_det2.txt","r");
	printf("%u %u",f[0],f[1]);
	getch();
	clrscr();
	printf("\nEnter the player's jersey no: ");
	scanf("%d %d",&n,&j);
	rewind(f[0]);
	rewind(f[1]);
     /*	for(j=0;j<2;j++)  */
	{
		for(i=1;i<=22;i+=2)
		{
			fread(&d,sizeof(d),1,f[j]);
			printf("%u %d   ",f[j],d.jno);
			if(n==d.jno)
			{
				b=1;
				break;
			}
		}
	   /*	if(b)
			break;    */
	}
	gotoxy(35,11);
	printf("\nNAME      :%s",d.name);
	gotoxy(35,12);
	printf("\nJERSEY NO :%d",d.jno);
	gotoxy(35,13);
	printf("\nPROFESSION:%d",d.ps);
	getch();
	fclose(f[0]);
	fclose(f[1]);
}