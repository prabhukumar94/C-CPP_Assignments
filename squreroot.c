#include<stdio.h>
#include<math.h>
 
int main()
{
  	double number, result;
 
 	printf(" \n Please Enter any Number to find Square root : ");
  	scanf("%lf", &number);
  
  	result = sqrt(number);
  
  	printf("\n Square Root a given number %.2lf  =  %.2lf", number, result);
 
  	return 0;
}
