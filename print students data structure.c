#include<stdio.h>
#include<conio.h>
struct Student
{
    int rollno,age,marks;
    char name[10],addr[10];
    
}s[10];
void main()
{
    int i, n=15;
    printf("\nEnter the number of students in class: ");
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
	printf("\nEnter the roll number:");
	scanf("%d", &s[i].rollno);
	printf("\nEnter the name of the student:") ;
	scanf("%s", &s[i].name) ;
	printf("\nEnter the marks :");
	scanf("%d",&s[i].marks);
	printf("\nenter the age:");
	scanf("%d",&s[i].age);
	printf("\n address of the student:");
	scanf("%s",&s[i].addr);
      }
    printf("\nRoll No. \t name \tmarks \tage \taddr\n\n");
    for(i=0;i<n;i++)
    {
	printf("\t%d\t %s\t %d\t %d\t %s\n",s[i].rollno,s[i].name,s[i].marks,s[i].age,s[i].addr);
    }
}


