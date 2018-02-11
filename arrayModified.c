#include<stdio.h>
int i, n;
int append_begin(int a[], int n);
int insert_at(int a[], int n);
int append_end(int a[], int n);
int del_beg(int a[], int n);
int del_at(int a[], int n);
int del_end(int a[], int n);
int display(int a[], int n);
int main()
{
	int a[100],val,pos,ch;
	printf("enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("\nenter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		printf("\na[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	do
	{
	printf("\n 1. Append at the beginning .");
	printf("\n 2. Insert at the given position . ");
	printf("\n 3. Append at the end .");
	printf("\n 4. Delete at the beginning .");
	printf("\n 5. Delete at the given position .");
	printf("\n 6. Delete at the end .");
	printf("\n\n Enter your choice: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
		{
			append_begin(a,n);
			break;
			
		}
		case 2:
		{
			insert_at(a, n);
			break;
		
		}
		case 3:
		{
			append_end(a,n);
			break;
			
		}
		case 4:
		{
			del_beg(a,n);
			break;
		}
		case 5:
		{
			del_at(a,n);
			break;
		}
		case 6:
		{
			del_end(a,n);
			break;
		}
	}
	
	}while(ch>=1 && ch<=6);
	

}
int append_begin(int a[], int n)
{
	int val;
	if(n == 100)
	{
		printf("array is full, no more elements can be appended. ");
	}
	else
	{
	printf("Enter the value to be inserted: ");
	scanf("%d", &val);
	for(i=n;i>=0;i--)
	{
		a[i+1] = a[i];
	}
	n = n + 1;
	a[0] = val;
	display(a,n);
}
}
int insert_at(int a[], int n)
{
	int pos,val;
	if(n == 100)
	{
		printf("array is full, no more elements can be inserted. ");
	}
	else
	{
	
	printf("enter the position at which the value should be inserted: ");
	scanf("%d", &pos);
	printf("enter the value: ");
	scanf("%d", &val);
	for(i = n-1; i>=pos; i--)
	{
	a[i+1] = a[i];
}
	a[pos] = val;
    n = n+1;
    display(a,n);
}
}
int append_end(int a[], int n)
{
	int val;
	if(n==100)
	{
		printf("array is full, no more elements can be inserted. ");
	}
	else
	{
		printf("enter the value to be inserted: ");
		scanf("%d", &val);
		a[n+1] = val;
		n = n+1;
		display(a,n);
	}
}
int del_beg(int a[], int n)
{
	if(n==0)
	{
		printf("array is empty, can't delete elements. ");
	}
	else
	{
		for(i=0;i<n-1;i++)
		{
			a[i] = a[i+1];
		}
		n = n-1;
		display(a,n);
	}
}
int del_at(int a[], int n)
{
	int pos;
	if(n==0)
	{
		printf("array is empty, can't delete elements. ");
	}
	else
	{
		for(i=pos;i<n-1;i++)
		{
		  a[i]=a[i+1];	
		}
		n=n-1;
		display(a,n);
	}
}
int del_end(int a[], int n)
{
	if(n==0)
	{
		printf("array is empty, can't delete elements. ");
	}
	else
	{
		n=n-1;
		display(a,n);
	}
}
int display(int a[],int n)
{
	printf("the elements in the array are: ");
	for(i=0;i<n;i++)
	{
		printf(" %d ", a[i]);
		
	}
}
