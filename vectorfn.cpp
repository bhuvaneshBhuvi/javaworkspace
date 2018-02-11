#include<iostream>
#include<vector>

using namespace std;


void printElements(vector<int>);
void insertAtBegin(vector<int>);
void insertAtPos(vector<int>);
void insertAtLast(vector<int>);
void delAtBegin(vector<int>);
void delAtPos(vector<int>);
void delAtEnd(vector<int>);

int main()
{
	vector<int>a;
	
	int inp,max,ch;
	cout<<"enter the maximum number of elements in the vector array: "<<endl;
	cin>>max;
	for(int i = 0;i < max;i++)
	{
		cin>>inp;
		a.push_back(inp);
	}
	cout<<endl;
	printElements(a);
	do
	{
	cout<<"1. Insert at the beginning ."<<endl;
	cout<<"2. Insert at the given position . "<<endl;
	cout<<"3. insert at the end ."<<endl;
	cout<<"4. Delete at the beginning ."<<endl;
	cout<<"5. Delete at the given position ."<<endl;
	cout<<"6. Delete at the end ."<<endl<<endl;;
	cout<<"Enter your choice: "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1://
		{
			insertAtBegin(a);
			break;
			
		}
		case 2:
		{
		    insertAtPos(a);
		    break;
		}
		case 3:
		{
		   insertAtLast(a);
		   break;
			
		}
		case 4:
		{
		   delAtBegin(a);
		   break;
		}
		case 5:
		{
		
           delAtPos(a);
           break;
		}
		case 6:
		{
		   delAtEnd(a);
		   break;
		}
	}
	
	}while(ch>=1 && ch<=6);
	
	
   
   
    
   
    
}
	
void insertAtBegin(vector<int> a)
{
	int val;
	cout<<"enter the value to be inserted: "<<endl;
	cin>>val;
	a.insert(a.begin(), val);
	printElements(a);
}
void insertAtPos(vector<int> a)
{
	int val, pos;
	cout<<"enter the position at which the element should be inserted: "<<endl;
	cin>>pos;
	cout<<"enter the value to be inserted: "<<endl;
	cin>>val;
	a.insert(a.begin() + pos, val);
	printElements(a);
}
void insertAtLast(vector<int> a)
{
	int val;
	cout<<"enter the value to be inserted: "<<endl;
	cin>>val;
	a.push_back(val);
	printElements(a);
}
void delAtBegin(vector<int> a)
{
	if(a.empty())
	  cout<<"the vector is empty so unable to delete elements..."<<endl;
	else
	{
	a.erase(a.begin());
	printElements(a);
}
}
void delAtPos(vector<int> a)
{
	int pos;
	if(a.empty())
	  cout<<"the vector is empty so unable to delete elements..."<<endl;
	else
	{
	cout<<"enter the position at which the element is to be deleted: "<<endl;
	cin>>pos;
	a.erase(a.begin()+pos);
	printElements(a);
}
}
void delAtEnd(vector<int> a)
{
	if(a.empty())
	  cout<<"the vector is empty so unable to delete elements..."<<endl;
	else
	{
	a.erase(a.begin()+(a.size()-1));
	printElements(a);
}
}
void printElements(vector<int> a)
{
	if(a.empty())
	  cout<<"the vector is empty"<<endl;
	else
	{
	for(int i = 0;i < a.size();i++)
	  cout<<a[i]<<" ";
	cout<<endl;
}
}
