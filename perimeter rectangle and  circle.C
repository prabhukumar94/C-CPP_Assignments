#include<stdio.h>
int main ()
{
int width=5;
int height=4;
int area;
int perimeter;
int r=2;
int circle;
int days,years,weeks;
days=366;
clrscr();
// perimeter of rectangle//
perimeter=2*(height+width);
printf("perimeter rectangle=%d inches\n",perimeter);
area=height*width;
printf("area of the rectangle=%d squaer inches\n",area);
// perimeter of circle//
printf("\n primeter of circle\n");
perimeter=2*3.14*r;
printf(" perimeter of circle= %d inches\n",perimeter);
circle=3.14*r*r;
printf(" area of circle=%d inches\n", circle);
//convert days into years  weeks days//
years=days/365;
weeks=(days%365)/7;
days=days-((years*365)+(weeks*7));
printf("\n number of years weeks days\n");
printf("years: %d\n",years);
printf("weeks:%d\n",weeks);
printf("days:%d\n",days);
return 0;
}