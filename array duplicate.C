#include <stdio.h>
int main()
{
    int arr[10];
    int i, j, n, count = 0;
    clrscr();
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
	scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
	for(j=i+1; j<n; j++)
	{
	    if(arr[i] == arr[j])
	    {
		count++;
		break;
    }
	}
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);

    getch();
    return 0;
}
