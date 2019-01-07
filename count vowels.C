
#include <stdio.h>
int main()
{
    char s1[50];
    char *pt;
    int  ctrV,ctrC;
    printf(" enter a string: ");
    fgets(s1, sizeof s1, stdin);
    pt=s1;

    ctrV=ctrC=0;
    while(*pt!='\0')
    {
	if(*pt=='A' ||*pt=='E' ||*pt=='I' ||*pt=='O' ||*pt=='U' ||*pt=='a' ||*pt=='e' ||*pt=='i' ||*pt=='o' ||*pt=='u')
	    ctrV++;
	else
	    ctrC++;
	pt++;
    }

    printf(" Number of vowels : %d\n Number of consonants : %d\n",ctrV,ctrC-1);
    return 0;
}
