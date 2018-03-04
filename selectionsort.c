#include<stdio.h>
void selectionSort(int a[], int n);
void display(int a[], int n);
int n,i,j;
int main()
{
	int a[100];
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	display(a,n);
}
void selectionSort(int a[], int n)
{
	int min,temp,first;
	for(i=0;i<n;i++)
	{
		
		min=i;
		first=min;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			
		}
		temp=a[min];
		a[min]=a[j];
		a[j]=temp;
	}
}
void display(int a[],int n)
{

for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
}
