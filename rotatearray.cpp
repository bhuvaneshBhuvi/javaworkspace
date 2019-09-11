#include<stdio.h>
int main()
{
	int arr[100],n;
	int i,j=0,count,temp_arr[100];					//try not use an additional array. Rethink the logic based on 
	int temp_n;							//reversing array.
	printf("enter the number of elements in the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\narray[%d]: ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("\nenter the value for count: ");
	scanf("%d", &count);
	for(i = 0; i < count; i++)
       temp_arr[i] = arr[i];
    for(i=count;i<n;i++)
	{
		arr[i - count] = arr[i];
	  }  

	for(i=n-count;i<n;i++)
	{
	
	  arr[i]=temp_arr[j];
	  j++;
}
	for(i=0;i<n;i++)
	  printf(" %d ", arr[i]);
	  
	
	  
}
