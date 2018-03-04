#include<stdio.h>
int i,j;
int main()
{
	int arr[100],n;
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\narr[%d]",i+1);
		scanf("%d", &arr[i]);                              //original array
	}
	quickSort(arr,0,n-1);                                  //function call to quick sort initially
	printFunction(arr,n);                                  //function call to print function after the execution of quick sort algorithm
	return 0;
}
void quickSort(int arr[], int low , int high)
{
	int val;
	if(low < high)
	{
		val=partition(arr,low,high);                      //function call inorder to place the pivot element at the correct position
		quickSort(arr,low,val-1);                         //recursive call to the same function
		quickSort(arr,val+1,high);                        //recursive call to the same function
	}
}

int partition(int arr[], int low, int high)
{
	int pivot, temp;
	pivot=arr[high];
	i=low-1;
	for(j=low;j<high;j++)
	{
		if(arr[j]<=pivot)
		{
			i=i+1;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[high];
	arr[high]=temp;
	return i+1;                                          //placeholder to swap the pivot element
	
}

void printFunction(int arr[], int n)
{
	for(i=0;i<n;i++)
	{
		printf(" %d ", arr[i]);                         //sorted array
	}
}
