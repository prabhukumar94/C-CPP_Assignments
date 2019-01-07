#include<stdio.h>
int main()
{
int h,m,s,second;
clrscr();
printf("\n input second:");
scanf("%d",&second);
h=(second/3600);
m=(second-(3600*h))/60;
s=second-(3600*h)-(m*60);
printf("h:m:s %d:%d:%d",h,m,s);
getch();
return 0;
}