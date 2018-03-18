#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int primeNumber(int n);
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	if(primeNumber(n))
	  printf("the given number is a prime number!");
	else
	  printf("the given number is not a prime number !");
}
int primeNumber(int n)
{
	int i;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		  return false;
	}
	return true;
}
