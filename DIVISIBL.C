#include<stdio.h>
int main()
{
int num,choice;
clrscr();
printf("enter the  number: ");
scanf("%d",&num);
{
printf("\nenter the choice A,B,C,D,=");
scanf("%s",&choice);
switch(choice)
{
case 'A':
if(num%2==0)
printf("\n is divisible by 2");
else
printf("\n not divisible by 2");
break;
case 'B':
if(num%3==0)
printf("\n is divisible by 3");
else
printf("\n not divisible by 3");
break;
case 'C':
if(num%4==0)
printf("\n is divisible by 4");
else
printf("\n not divisible by 4");
case 'D':
if(num%6==0)
printf("\n is divisible by 6");
else
printf("\n not divisible by 6");


 }
}
getch();
 return 0;
}


