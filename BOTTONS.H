void botton(int x,int y,int bsize,char *s)
{
 int poly[8],i,left=0,right=0,top=0,bottom=0;
 int sx,sy;
 char text[10];
 for(i=0;*(s+i)!='\0';i++)
  text[i]=*(s+i);
 text[i]='\0';
 switch(bsize)
 {
  case 2:sx=19;
	 sy=20;
	 break;
  case 3:sx=26.5;
	 sy=30;
	 break;
  case 4:sx=32.5;
	 sy=40;
	 break;
 }
 left=x;
 top=y;
 right=x+(i*sx);
 bottom=y+sy;
/* poly[0]=left;
 poly[1]=top;
 poly[2]=right;
 poly[3]=top;
 poly[4]=right;
 poly[5]=bottom;
 poly[6]=left;
 poly[7]=bottom;
 setfillstyle(6,getmaxcolor());
 fillpoly(4,poly);*/
 setcolor(4);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,bsize);
 outtextxy(left+5,top+bsize,text);
}