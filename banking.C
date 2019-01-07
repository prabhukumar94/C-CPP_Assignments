#include<stdio.h>
int main()
{
int amount, total;
clrscr();
printf(" input the amount:");
scanf("%d",&amount);
total=amount/100;
printf("%d notes of 100\n", total);
amount=amount-(total*100);
total=amount/50;
printf("%d notes of 50 \n", total);
getch();
return 0;
}
