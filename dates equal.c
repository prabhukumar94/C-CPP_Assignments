#include<stdio.h>
#include<conio.h>
struct date
{
int d;
int m;
int y;
}d[2];
int main()
{
	int i,f=0;
for(i=0;i<2;i++)
{

printf("\n Enter the day for the %d date\n",i+1);
scanf("%d",&d[i].d);
printf("\n Enter the month for the %d date\n",i+1);
scanf("%d",&d[i].m);
printf("\n Enter the year for the %d date\n",i+1);
scanf("%d",&d[i].y);
}
if(d[0].d==d[1].d)
{if(d[0].m==d[1].m)
{if(d[0].y==d[1].y)
{f=1;
}
}
}
if(f==1)

	printf("\n The dates are equal");
	else
	printf("\n The dates are not equal");
	return 0;

}
