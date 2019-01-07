#include <stdio.h>
struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *perPtr, p1;
    perPtr = &p1;   

    printf("Enter age:");
    scanf("%d", &perPtr->age);

    printf("Enter weight:");
    scanf("%f", &perPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", perPtr->age);
    printf("weight: %.1f", perPtr->weight);

    return 0;
}
