#include<stdio.h>
#include<conio.h>
struct Student
{
    int rollno,age;
    char name[10];
    
}s[10];
void main()
{
    int i=1, n=5, num;
struct Student s[10];
    printf("\nEnter the number of students in class: ");
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
 	printf("\n enter the roll number:");
 	scanf("%d",&s[i].rollno);
 	printf("\n age of the student:");
 	scanf("%d",&s[i].age);
 	printf("\n name of the student:");
 	scanf("%s",&s[i].name);
    }
    printf("\nrollno \tage \tname\n\n ");
    for(i=0;i<n;i++)
    {
    printf("\n\%d\t %d\t %s\t\n\n",s[i].rollno,s[i].age,s[i].name);

}
}
