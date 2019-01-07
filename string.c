#include<stdio.h>
#include<string.h>

void changePosition(char*ch1,char*ch2)
{
	char temp;
	temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
}
void charPermu(char*cht,int stno,int endno)
{
	int i;
	if(stno==endno)
     {
     	printf("%s\n",cht);
	 }
	 else
	 for(i=stno;i<=endno;i++)
	 {
	 	changePosition((cht+stno),(cht+i));
	 	charPermu(cht,stno+1,endno);
	 	changePosition((cht+stno),(cht+i));
	 }

}

int main()
{
	char str[]="DELHI";
	printf("\n\n pointer:generate permutation of a string: \n");
	printf("---------------------------\n");
	int n=strlen(str);
	printf("the permutation of the strings are: \n");
	charPermu(str, 0, n-1);
	printf("\n\n");
	return 0;
}
