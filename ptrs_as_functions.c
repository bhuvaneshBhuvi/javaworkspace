#include<stdio.h>
int *add(int *a ,int *b)
{
	int c = *a + *b;
	return &c;
}
int Add(int *a,int *b)
{
	int c =*a + *b;
	return &c;
}
int main()
{
	int a = 2, b = 4;
	int *c = add(&a,&b);
	printf("%d",(*c));
	c = Add(&a,&b);
	printf("\n%d",(*c));
}
