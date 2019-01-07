#include <stdio.h>

void main()
{
    int a1[100], a2[100];
    int i, n;
	   
       printf("enter the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("enter %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a1[i]);
	    }
    for(i=0; i<n; i++)
    {
        a2[i] = a1[i];
    }

    printf("\n elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", a1[i]);
    }
    printf("\n\n elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", a2[i]);
    }

}
