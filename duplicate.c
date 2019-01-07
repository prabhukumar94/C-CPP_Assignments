void main()
{
    int a1[100];
	int a2[100];
	int a3[100];
    int n,mm=1,c=0;
    int i, j;		

       printf("enter the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a1[i]);
	    }
		for(i=0;i<n; i++)
        {
		a2[i]=a1[i];
		a3[i]=0;
        }
	for(i=0;i<n; i++)
        {
		for(j=0;j<n;j++)
			{
				if(a1[i]==a2[j])
				{
				a3[j]=mm;
				mm++;
				}
			}
				mm=1;
        }		
   for(i=0; i<n; i++)
    {
      if(a3[i]==2){c++;}  
    }
      printf(" total number of duplicate elements found in the array is: %d \n", c);
  		
}
			
