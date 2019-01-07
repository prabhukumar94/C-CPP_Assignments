
#include <stdio.h>
#include <string.h>
 
main()
{
    int s, s1;
    int a[100], size, i;
    printf("\n enter the elements : ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 0 ; i < size; i++)
        scanf("%d", &a[i]);
    if (a[0] < a[1])
	 {
        s = a[0];
        s1 = a[1];
    }
    else {
      s = a[1];
      s1 = a[0];
    }
    for (i = 2; i < size; i++) {
        if (a[i] < s) {
        s1 = s;
        s = a[i];
        }
        else if (a[i] < s1) {
            s1= a[i];
        }
    }
    printf(" \nSecond smallest element is %d", s1);
}
