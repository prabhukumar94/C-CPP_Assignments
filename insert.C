#include<stdio.h>

   main() 
{ 
    int a[20] = {5, 15, 18, 10, 12, 19}; 
    int c= sizeof(a)/sizeof(a[0]); 
    int n = 6; 
    int i, key = 14; 
  
    printf("\nBefore Insertion: "); 
    for (i=0; i<n; i++) 
        printf("%d  ", a[i]); 
   
    n = insertSorted(a, n, key, c); 
  
    printf("\nAfter Insertion: "); 
    for (i=0; i<n; i++) 
        printf("%d  ",a[i]); 
  
    return 0; 
} 
int insertSorted(int a[], int n, int key, int c) 
{ 
    
    if (n >= c) 
       return n; 
  
    int i; 
    for (i=n-1; ( i = 0  && a[i] > key); i--) 
       a[i+1] = a[i]; 
  
    a[i+1] = key; 
  
    return (n+1); 
} 

