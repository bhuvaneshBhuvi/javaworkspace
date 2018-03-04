#include<stdio.h>
#include<stdbool.h>
void bubblesort(int a[], int n);
void print(int a[], int n);
int main()
{
	int a[100],i,j,n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	print(a,n);
}
void bubblesort(int a[], int n)
{
	int i,j,temp;
	bool count;
	for(i=0;i<n-1;i++)
	{
		count = true;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(count == false)
		{
			break;
		}

	}
}
void print(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
