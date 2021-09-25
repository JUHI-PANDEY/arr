#include<stdio.h>
int main()
{
 	int n1,n3, i, j;
 	printf("\n Enter the number of elements in Array  :  ");
 	scanf("%d", &n1);     
    int a[n1];      
 	printf("\nEnter the elements of Array :  ");
 	for(i = 0; i < n1; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	
	n3 = n1 + n1;     
    int c[n3];      
  	for(i = 0; i < n1; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0, j = n1; j < n3 && i < n1; i++, j++)
  	{
  		c[j] = a[i];
  	}
 	printf("\n a[%d] Array Elements After Merging \n", n3); 
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}
  	return 0;
}



