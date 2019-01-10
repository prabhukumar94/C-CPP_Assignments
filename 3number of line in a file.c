#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int linescount=0;
	

	fp=fopen("pp.txt","r");
	if(fp==NULL)
	{
		printf("given file does not exist!!!\n");
		return -1;
	}
		while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
			linescount++;
	}
	fclose(fp);
	printf("Total number of lines are: %d\n",linescount);
	
	return 0;	
}
