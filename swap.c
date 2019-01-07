#include <stdio.h>
 
void main()
{
    long a, b;
 
    printf("Enter two integers \n");
    scanf("%ld %ld", &a, &b);
    printf("\n Before swapping a= %ld and b=%ld", a, b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n After swapping i=%ld and k=%ld", a, b);
}
