#include <stdio.h>
  void main()
  {
  int a[10];
  int i, j, N, temp;
  int find_max(int  b[10], int k); 
  void exchang(int  b[10], int k);
  printf("\n enter no. of values in the array : ");
  scanf("%d",&N);
   printf("\n enter the elements one by one: ");
  for(i=0; i<N ;  i++)
  {
  scanf("%d",&a[i]); }
  exchang(a,N);
  printf("Sorted  array :\n");
  for(i=0; i< N ;  i++)
  {
  printf("%d\n",a[i]);
  }
}
  int find_max(int b[10], int k)
  {
  int max=0,j;
  for(j = 1; j <=  k; j++)
  {
  if ( b[j] >  b[max])
  {
  max =  j;}
  }
  return(max);
  }
  void exchang(int  b[10],int k)
  {
  int  temp, big, j;
  for ( j=k-1;  j>=1; j--)
  {
  big =  find_max(b,j);
  temp = b[big];
  b[big] = b[j];
  b[j] = temp;
  }
  }
  
  
