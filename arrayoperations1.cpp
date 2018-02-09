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
	printf("enter the elements of the array: ");				//Then What is the purpose of insert function?
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
   }while(ch<=6 && ch!=0);							//when will the control reach switch statement?
	switch(ch)
	{									//why are the cases not in order?
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
void append_begin(int arr[], int pos, int val, int n)				//If its append_begin why get pos?
{										//What is the purpose val?
	int i;
	for(i=n;i>0;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = pos;
}
void insert_pos(int arr[], int pos, int val, int n)				//refactor to insert_at() or simply insert()
{
	int i;
	for(i=n;i>=pos;i--)
	  arr[i+1]=arr[i];							//if n is size of array , then your iteration starts by
	arr[pos] = val;								// assigning n+1. is it right assinging a 11th value to 
	n+=1;									// an array of size 10?
	
}
void append_end(int arr[], int val, int n)
{
	int i;									//what if n is already the maximum capacity of the array?
	n=n+1;
	arr[n] = val;
}
void del_start(int arr[], int n)
{
	n = n + 1;								//How will this work?
}
void del_end(int arr[], int n)
{
	n = n - 1;								//aren't you supposed to return the value of n?
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


/**************************************************************************************/
/* 1. You have not checked array boundary any where!!!. What if I want to insert an   */
/*	element in an already full array? What if I want to delete from an already    */
/*	empty array?								      */
/* 2. You have never updated the values !!!.When you modify the array its fine , its a*/
/*	pointer, but what happens to the original 'n'? why does every operation return*/
/*	void?									      */
/* 3. Are you familiar at all with the concept of loops? What mess have you done with */
/*	the menu driver? Did you execute the program at least once? Did it work?      */
/**************************************************************************************/
