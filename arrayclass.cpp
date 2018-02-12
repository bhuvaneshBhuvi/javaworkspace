#include<iostream>
using namespace std;

class arrayOperations
{
	public:
	
	int append_begin(int a[], int n, int val);
    int insert_at(int a[], int n, int pos, int val);
    int append_end(int a[], int n, int val);
    int del_beg(int a[], int n);
    int del_at(int a[], int n, int pos);
    int del_end(int a[], int n);
    int display(int a[], int n); 
};
arrayOperations::append_begin(int a[], int n, int val)
{
    if(n == 100)
	{
		cout<<"array is full, no more elements can be appended. "<<endl;;
	}
	else
	{
	for(int i=n;i>=0; i--)
	{
		a[i+1] = a[i];
	}
	n = n + 1;
	a[0] = val;
	display(a,n);	
}
    return 0;
}

arrayOperations::insert_at(int a[], int n, int pos, int val)
{
	if(n == 100)
	{
		cout<<"array is full, no more elements can be inserted. "<<endl;
	}
	else
	{
	for(int i = n-1; i>=pos; i--)
	{
	a[i+1] = a[i];
}
	a[pos] = val;
    n = n+1;
    display(a,n);
}
    return 0;
}

arrayOperations::append_end(int a[], int n, int val)
{
	if(n==100)
	{
		cout<<"array is full, no more elements can be inserted. "<<endl;
	}
	else
	{
		a[n+1] = val;
		n=n+1;
		display(a,n);
	}
	return 0;
}

arrayOperations::del_beg(int a[], int n)
{
	if(n==0)
	{
		cout<<"array is empty, can't delete elements. "<<endl;
	}
	else
	{
		for(int i=0;i<n-1;i++)
		{
			a[i] = a[i+1];
		}
		n = n-1;
		display(a,n);
	}
	return 0;
}
arrayOperations::del_at(int a[], int n, int pos)
{
	if(n==0)
	{
		cout<<"array is empty, can't delete elements. "<<endl;
	}
	else
	{
		for(int i=pos;i<n-1;i++)
		{
		  a[i]=a[i+1];	
		}
		n=n-1;
		display(a,n);
	}
	return 0;
}
arrayOperations::del_end(int a[], int n)
{
	if(n==0)
	{
		cout<<"array is empty, can't delete elements. "<<endl;
	}
	else
	{
		n=n-1;
		display(a,n);
	}
	return 0;
}
arrayOperations::display(int a[], int n)
{
	for(int i=0;i<n;i++)
	  cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
int main()
{
	int a[100],n,val,ch,pos;
	arrayOperations obj;
	cout<<"enter the maximum number of elements in the array: "<<endl;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cout<<"a["<<i+1<<"]"<<endl;
		cin>>a[i];
	}
	do
	{
	cout<<" 1. Append at the beginning ."<<endl;
	cout<<" 2. Insert at the given position . "<<endl;
	cout<<" 3. Append at the end ."<<endl;
	cout<<" 4. Delete at the beginning ."<<endl;
	cout<<" 5. Delete at the given position ."<<endl;
	cout<<" 6. Delete at the end ."<<endl<<endl;;
	cout<<" Enter your choice: "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			cout<<"enter the value to be appended in the array: ";
			cin>>val;
			obj.append_begin(a,n,val);
			break;
			
		}
		case 2:
		{
			cout<<"enter the position at which the element should be inserted: "<<endl;
			cin>>pos;
			cout<<"enter the value of the element to be inserted: "<<endl;
			cin>>val;
			obj.insert_at(a, n, pos, val);
			break;
		
		}
		case 3:
		{
			cout<<"enter the value to be inserted: "<<endl;
			cin>>val;
			obj.append_end(a,n,val);
			break;
			
		}
		case 4:
		{
			obj.del_beg(a,n);
			break;
		}
		case 5:
		{
			cout<<"enter the position of the element to be deleted: "<<endl;
			cin>>pos;
			obj.del_at(a,n,pos);
			break;
		}
		case 6:
		{
			obj.del_end(a,n);
			break;
		} 
	}
	
	}while(ch>=1 && ch<=6);
	
}

