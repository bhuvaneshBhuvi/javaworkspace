#include<stdio.h>
int i=0,j=0;
int main()
{
	int arr[100],n;
	printf("enter the number of elements in the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\narr[%d]", i+1);
		scanf("%d", &arr[i]);
	}
	mergeSort(arr,0,n-1);
	printFunction(arr,n);
	
}

void mergeSort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m;
		m=l+(r-1) /2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
 void merge(int arr[],int l, int m,int r)
 {
 	int k=1,nl,nr,left[100],right[100];
 	nl=m-l+1;
 	nr=r-m;
 	for(i=0;i<nl;i++)
 	{
 		left[i]=arr[1+i];
 		
	 }
	for(j=0;j<nr;j++)
	{
		right[j]=arr[m+1+j];
	}
	while(i<nl && j<nr)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<nl)
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<nr)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
 }
 void printFunction(int arr[],int n)
 {
 	for(i=0;i<n;i++)
 	{
 		printf(" %d ",arr[i]);
	 }
 }
