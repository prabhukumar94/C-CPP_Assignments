#include<stdio.h>
int main()
{
int x;
float y;
clrscr();
printf("input total distance in km:");
scanf("%d",&x);
printf("input total fuel spent in liters:");
scanf("%f",&y);
printf("average consumption km/ltr %f",x/y);
getch();
return 0;
}

