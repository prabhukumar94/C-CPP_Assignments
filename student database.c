

#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[20];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	int total;
	float percentage;
};
int main()
{
	struct student st[10];
	int i,n;
	printf("enter the number of students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the details of student %d\n",i+1);
	printf(" Enter RollNo,Name and three subject marks\n");
	scanf("%d%s%d%d%d",&st[i].rollno,&st[i].name,&st[i].chem_marks,&st[i].maths_marks,&st[i].phy_marks);
	st[i].total=st[i].chem_marks+st[i].maths_marks+st[i].phy_marks;
	st[i].percentage=st[i].total/3.0;
	printf("rollno=%d\n",st[i].rollno);
	printf("Name=%s\n",st[i].name);
	printf("chem_marks=%d\n",st[i].chem_marks);
	printf("maths_marks=%d\n",st[i].maths_marks);
	printf("phy_marks=%d\n",st[i].phy_marks);
	printf("total=%d\n",st[i].total);
	printf("percentage=%.2f\n",st[i].percentage);
	}
	return 0;
}


