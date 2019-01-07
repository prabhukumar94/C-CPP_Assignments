#include<stdio.h>
int main()
{
char id[10];
int hour;
double value,salary;
clrscr();
printf("input the employees id:");
scanf("%s",&id);
printf("\n input the working hours:");
scanf("%d",&hour);
printf("\n salary amount/hr:");
scanf("%lf",&value);
salary=value*hour;
printf("\n employees id=%s \n salary=%lf\n",id,salary);
getch();
return 0;
}