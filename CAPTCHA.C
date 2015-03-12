#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,x,c,d,e,f,b;
char a[100];
clrscr();
randomize();
x=random(10)+10;
b=random(20)+10;
c=random(30)+10;
d=random(40)+10;
e=random(50)+10;
f=random(60)+10;
printf("\nthe captcha is %d%d%d%d%d%d",x,b,c,d,e,f);
printf("\nenter the given captcha");
l1:for(i=0;i<6;i++)
{
scanf("%c",a[i]);
}
printf("\nthe entered string is %s",a);
if(a[0]==x && a[1]==b && a[2]==c && a[3]==d && a[4]==e && a[5]==f   )
{
printf("correct captcha");
}
else
goto l1;
getch();
}
