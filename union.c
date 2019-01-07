#include <stdio.h>
union empAdd
{
char *ename;
char stname[20];
int pincode;
};

int main()
{
 
    union empAdd employee,*pt;
       pt=&employee;
    printf("Enter employee name:");
    scanf("%d", &pt->ename);

    printf("Enter state name:");
    scanf("%s", &pt->stname);
     printf("Enter pincode:");
    scanf("%d", &pt->pincode);

    printf("Displaying:\n");
    printf("ename: %d\n", pt->ename);
    printf("stname: %f", pt->stname);
     printf("pincode: %f", pt->pincode);

 

  return 0;


}
