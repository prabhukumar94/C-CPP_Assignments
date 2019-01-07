#include<stdio.h>
int main()
{
double wi1,wi2,ci1,ci2,result;
clrscr();
printf("weight-item1:\n");
scanf("%lf",&wi1);
printf("no. of item1:");
scanf("%lf",&ci1);
printf("weight-item2:");
scanf("%lf",&wi2);
printf("no. of item2:");
scanf("%lf",&ci2);
result=(wi1*ci1)+(wi2*ci2)/(ci1+ci2);
printf("average value of%f\n",result);
return 0;
}
