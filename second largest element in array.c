#include <stdio.h>

void main(){
  int a1[50],n,i,j=0,lrg,large2nd;
 
  
       printf("enter the size of array : ");
       scanf("%d", &n);
       printf("enter %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&a1[i]); 
		  }

   lrg=0;
  for(i=0;i<n;i++)
  {
      if(lrg<a1[i])
	  {
           lrg=a1[i];
           j = i;
      }
  }		
   large2nd=0;
  for(i=0;i<n;i++)
  {
     if(i==j) {
          i++;  
		  i--;
        }
      else
        {
          if(large2nd<a1[i])
	     {
               large2nd=a1[i];
             }
        }
  }

  printf("The Second largest element in the array is :  %d \n", large2nd);
}
     
