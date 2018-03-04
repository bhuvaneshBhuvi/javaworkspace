#include<stdio.h>
void insertion_sort(int arr[], int n);
void print_function(int arr[], int n);
int i,j;
int main()
{
	int arr[100],n;
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\narr[%d] : ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\n");
	insertion_sort(arr,n);
	print_function(arr,n);
	return 0;
}

insertion_sort(int arr[], int n)
{
	int value;
	for(i=1;i<n;i++)
	{
		value=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>value)
		{
			arr[j+1]=arr[j];
			j-=1;
		}
		arr[j+1]=value;
	}
}
void print_function(int arr[], int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
