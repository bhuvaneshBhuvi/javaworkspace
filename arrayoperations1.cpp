#include<stdio.h>
void append_start(int arr[], int pos, int val, int n);
void append_end(int arr[], int val,int n);
void insert_pos(int arr[], int pos, int val,int n);
void  del_end(int arr[], int n);
void del_pos(int arr[], int pos, int n);
void del_start(int arr[], int n);
int main()
{
	int a[100],n,i,val,pos,ch;
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ", i+1);
		scanf("%d", a[i]);
	}
	do
	{
	
	printf("\n1. insert at beginning.");
	printf("\n2. insert at given position.");
	printf("\n3. insert at end.");
	printf("\n4. delete at beginning.");
	printf("\n5. delete at given position.");
	printf("\n6. delete at end.");
	printf("enter your choice: ");
	scanf("%d", &ch);
   }while(ch<=6 && ch!=0);
	switch(ch)
	{
		if(ch == 1)
		{
			printf("\nenter the value to be inserted: ");
			scanf("%d", &val);
			void insert_start(int a[], int pos, int val, int n);
			void display(int a[], int n);
			
		}
		if(ch == 3)
		{
			printf("\nenter the value to be inserted");
			scanf("%d",&val);
		    void insert_end(int a[], int val, int n);
		    void display(int a[], int n);
		}
		if(ch == 2)
		{
			printf("\nenter the position at which the element should be inserted: ");
			scanf("%d", &pos);
			printf("\nenter the value to be inserted at the position no: %d", pos);
			scanf("%d", &val);
			void insert_pos(int a[], int pos, int val, int n);
			void display(int a[], int n);
		}
		if(ch == 4)
		{
			void del_start(int a[], int n);
			void display(int a[], int n);
		}
		if( ch == 6)
		{
			void del(int a[], int n);
			void display();
		}
		if(ch == 5)
		{
			printf("enter the position at which the value is to be deleted: ");
			scanf("%d", &pos);
			void del_pos(int a[],int pos, int n);
			void display(int a[], int n);
		}
	}
}
void append_begin(int arr[], int pos, int val, int n)
{
	int i;
	for(i=n;i>0;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = pos;
}
void insert_pos(int arr[], int pos, int val, int n)
{
	int i;
	for(i=n;i>=pos;i--)
	  arr[i+1]=arr[i];
	arr[pos] = val;
	n+=1;
	
}
void append_end(int arr[], int val, int n)
{
	int i;
	n=n+1;
	arr[n] = val;
}
void del_start(int arr[], int n)
{
	n = n + 1;
}
void del_end(int arr[], int n)
{
	n = n - 1;
}
void del_pos(int arr[], int pos, int n)
{
	int i;
	for(i = pos;i <= n - 1; i++)
	  arr[i] = arr[i+1];
	n = n - 1;
}
void display(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	  printf(" %d ", arr[i]);
}
