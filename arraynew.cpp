#include<iostream>
using namespace std;
class array{
	private:
		int *arr;
		int length;
		int size;
	public:
		array(int siz)
		{
			size=siz;
			arr[size];
		}
		array(array&copy)
		{
			size=copy.size;
			arr[size];
		}

	bool insertAt(int arr[],int n,int pos,int val)
	{
		
    if(n==size)
       return false;
    else if(pos > n+2){
    	return false;
	}
	else{
		for(int i=n-1;i>=pos;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[pos]=val;
		n=n+1;
	//	display(arr,n);
		return true;
	}	
}	
     bool append(int arr[],int n,int val)
	  {
	if(n==size)
	  return false;
	else 
	{
		n=n+1;
		for(int i=n-1;i>=0;i--)
		  arr[i+1]=arr[i];
	    arr[0]=val;
	}
	return true;
}
 bool prepend(int arr[],int n,int val)
 {
 	
	if(n==size)
	  return false;
	else
	{
		n=n+1;
		arr[n]=val;
		return true;
	}

 }
int valueAt(int arr[],int pos)
{
	return(arr[pos]);
}
int front(int arr[])
{
	return(arr[0]);
}
int tail(int arr[], int n)
{
	return(arr[n-1]);
}

void display(int arr[],int n)
 {
 	for(int i=0; i<n; i++)
 	{
 		cout<<" "<<arr[i]<<endl;
	 }
 }
int lengthOfArray(int arr[])
{
	int pos;
	length=0;
	pos=0;
	while(arr[pos]!='\0')
	{
		length++;
		pos++;
	}
	return length;
}
int sizeofarray(int arr[])
{
	return sizeof(arr);
}
bool isEmpty(int arr[],int n)
{
	if(n==0)
	  return true;
	else
	  return false;
}
bool isFull(int arr[],int n)
{
	if(n==sizeof(arr))
	  return true;
	else
	  return false;
}
int contains(int arr[], int n,int value)
{
	int pos=0;
	while(pos<n)
	{
		if(arr[pos]==value)
		  return pos+1;
		else
		  pos++;
	}
	if(pos==n)
	  return -1;
}
bool clear(int n)
{
	n=0;
	return n;
}
bool clipFront(int arr[], int n)
{
	if(n==0)
	  return false;
	else
	{
	for(int i=1;i<n;i++)
	  arr[i-1]=arr[i];
    return true;
}
}
bool clipTail(int arr[],int n)
{
	if(n==0)
	  return false;
	else{
	n=n-1;
	return true;
}
}
bool remove_multi(int arr[],int startIndex,int endIndex,int n)
{
	if(startIndex < 1 || endIndex > n)
	  return false;
    else
    {
	int count = (endIndex - startIndex) + 1;
	for(int i=endIndex;i<n;i++)
     arr[i-count]=arr[i];
    n=n-count;
}
    return true;
}
bool remove(int arr[], int position,int n)
{
	if(position < 1 || position > n)
	  return false;
	else
	{
    for(int i=position-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n=n-1;	
}
   return true;
}


};
int main()
{
	
	int size,n,ch,pos,val;
	cout<<"enter the size of the array: "<<endl;
	cin>>size;
	array obj(size);
	array copy(obj);
	cout<<"enter the length of the array: "<<endl;
	cin>>n;
	int arr[size];
	for(int i=0;i<n;i++)
	{
		cout<<"arr["<<i+1<<"]: ";
		cin>>arr[i];
		cout<<endl;
	}
	do{
		cout<<"1. insert at position: "<<endl;
		cout<<"2. append: "<<endl;
		cout<<"3. prepend: "<<endl;
		cout<<"4. value at the given position: "<<endl;
		cout<<"5. return the value at front: "<<endl;
		cout<<"6. return the value at the back: "<<endl;
		cout<<"7. length of the array: "<<endl;
		cout<<"8. size of the arrray: "<<endl;
		cout<<"9. empty array: "<<endl;
		cout<<"10. filled array: "<<endl;
		cout<<"11. position of the given value: "<<endl;
		cout<<"12. clear the array: "<<endl;
		cout<<"13. clipfront: "<<endl;
		cout<<"14. cliptail: "<<endl;
		cout<<"15. remove multiple elements: "<<endl;
		cout<<"16. remove at the specified position: "<<endl;
		cout<<"enter your choice: "<<endl;
		cin>>ch;
		
	
	switch(ch)
	{
		case 1:
		{
			cout<<"enter the position at which the value must be entered: "<<endl;;
			cin>>pos;
			cout<<"enter the value to be entered: "<<endl;
			cin>>val;
			obj.insertAt(arr,n,pos,val);
			obj.display(arr,n);
			break;
		}
		case 2:
		{
			cout<<"enter the value to be appended: "<<endl;
			cin>>val;
			obj.append(arr,n,val);
			obj.display(arr,n);
			break;
		}
		case 3:
		{
			cout<<"enter the value to be prepended: "<<endl;
			cin>>val;
			obj.prepend(arr,n,val);
			obj.display(arr,n);
			break;
		}
		case 4:
		{
			cout<<"enter the position from which the value should be returned: "<<endl;
			cin>>pos;
			cout<<" "<<obj.valueAt(arr,pos)<<endl;
			break;
		}
		case 5:
	    {
	    	
	    	cout<<" "<<obj.front(arr)<<endl;
	    	break;
		}
		case 6:
		{
			cout<<" "<<obj.tail(arr,n)<<endl;
			break;
		}
		case 7:{
			cout<<" "<<obj.lengthOfArray(arr)<<endl;
			break;
		}
		case 8:{
			cout<<" "<<obj.sizeofarray(arr)<<endl;
			break;
		}
		case 9:{
			cout<<" "<<obj.isEmpty(arr,n)<<endl;
			break;
		}
		case 10:{
			cout<<" "<<obj.isFull(arr,n)<<endl;
			break;
		}
		case 11:{
			int value;
			cout<<"enter the value: "<<endl;
			cin>>value;
			cout<<" "<< obj.contains(arr,n,value);
			break;
		}
		case 12:{
			int n;
			n=obj.clear(n);
			obj.display(arr,n);
			break;
		}
		case 13:{
			obj.clipFront(arr,n);
			obj.display(arr,n);
			break;
		}
		case 14:{
			obj.clipTail(arr,n);
			obj.display(arr,n);
			break;
		}
		case 15:{
			int startIndex,endIndex;
			cout<<"enter the starting index to delete: "<<endl;
			cin>>startIndex;
			cout<<"enter the ending index to delete: "<<endl;
			cin>>endIndex;
			obj.remove_multi(arr,startIndex,endIndex,n);
			obj.display(arr,n);
			break;
		}
		case 16:{
			int position;
			cout<<"enter the position at which the element should be removed: "<<endl;
			cin>>position;
			obj.remove(arr,position,n);
			obj.display(arr,n);
			break;
		}
		case 17:{
			obj.display(arr,n);
			break;
		}
		
	}
}while(ch<=17 && ch!=0);
}

