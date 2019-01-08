#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20], i, n ,b[20],sum;
	    printf("Enter the number of elements : ") ;
    scanf("%d", &n) ;
    printf("\nEnter the elements :\n\n") ;
    for(i = 0 ; i < n ; i++)
    scanf("%d", &a[i]) ;
    printf("\nThe negative elements are :\n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        if(a[i] < 0)
        printf("%d\t", a[i]) ;
    }
        if(a[i]>0)
        {
		
        printf("%d",a[i]);
    }
    }
