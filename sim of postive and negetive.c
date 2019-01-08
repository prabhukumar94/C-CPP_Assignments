#include<stdio.h>
 
int main()
{
 int Size, i, a[10],sum=0,num=0;
 
 printf("\n  Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\n  Enter the Array Elements  :  ");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
 
 printf("\n List of Positive Numbers in this Array  :  "); 
 for(i = 0; i < Size; i ++)
 {
   if(a[i] >= 0)
   {
	   	printf("%d  ", a[i]);
	   	
   }
   if(a[i]>=0)
   sum+=a[i];
   else
   num+=a[i];
   
 }
 printf("\n sum os pisitive elements %d:",sum);
 printf("\n sum of negetive elements %d:",num);
 return 0;
}
