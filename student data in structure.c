#include<stdio.h>
#include<conio.h>
struct Student
{
    int rollno,sub1,sub2,total;
    char name[10];
    float avg ;
}s[10] ;
void main()
{
    int i, n ;
    printf("\nEnter the number of students in class: ");
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
	printf("\nEnter the roll number:");
	scanf("%d", &s[i].rollno) ;
	printf("\nEnter the name of the student=") ;
	scanf("%s", &s[i].name) ;
	printf("\nEnter the marks in sub1=");
	scanf("%d",&s[i].sub1);
	printf("\nenter the marks in sub2=");
	scanf("%d",&s[i].sub2);
	s[i].total= s[i].sub1+s[i].sub2 ;
	s[i].avg = s[i].total/2;
    }
    printf("\nRoll No. \t name \tSub1 \tSub2 \tTotal \tAverage\n\n");
    for(i=0;i<n;i++)
    {
	printf("\t%d\t %s\t %d\t %d\t %d\t %.2f\n",s[i].rollno,s[i].name,s[i].sub1,s[i].sub2,s[i].total,s[i].avg);
    }
    
}
