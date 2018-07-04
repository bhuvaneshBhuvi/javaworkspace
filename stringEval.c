#include<stdio.h>
#include<string.h>

/*int eval(char a[])
{ 
  int n, i, val = a[0]-48;
  n = strlen(a);
  for(i=0; i<n; i++)
  {
  	if(a[i] == '+')
  	{
  		val = val  + (a[i+1]-48);
	  }
	if(a[i] == '-')
	  val = val - (a[i+1]-'0');
	  
  }
  printf("%d ", val);
}*/

int eval(char a[])
{
	int n, i=0, val = a[0]-48;
	n = strlen(a);
//	printf("%d ", val);
	while(a[i] != '\0')
	{
		if(a[i] == '+')
		{
			if(a[i+1] == '-')
			{
			//	printf("%d ", a[i+2]-48);
				val = val - (a[i+2]-48);
			//	printf("%d", val);
				return val;
			}
			else
			{
				val = val + a[i+1]-48;
				return val;
			}
		}
		else if(a[i] == '-')
		{
			if(a[i+1] == '-')
			{
		//		printf("%d ", a[i+2]);
				val = val + (a[i+2]-48);
				return val;
			}
			else if(a[i+1] == '+')
			{
				val = val - (a[i+2]-48);
				return val;
			}
			else
			{
				val = val - (a[i+1]-48);
				return val;
			}
		}
		i++;
		
	}
}


int main()
{
	char str[100] = "5--2";
	printf("%d ",eval(str));
	printf("%d ",eval("5+-2"));
//	printf("%d ",eval(5--2));
	printf("%d ",eval("5+2"));
	printf("%d ",eval("5-2"));
}
