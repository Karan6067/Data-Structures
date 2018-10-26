//	Basic operations on Arrays

#include<iostream>
using namespace std;

int main()
{
	int a[20],n,i,m,pos,ele,in,flag=0;
	cout<<"Please Specify the size of Array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Please Enter the Operation You Want To Perform:\n1 To Insert\n2 To Delete\n3 To Search\n4 To Display\n";
	cin>>in;
	while(in!=0)
	{
    	switch(in)
   		{
    	case 1:
        	cout<<"Enter the position and element you want to insert\n";
        	cin>>pos>>ele;
        	m=n-pos-1;
        	for(i=n;i>=m;i--)
        	{
            	a[i+1]=a[i];
        	}
        	a[pos]=ele;
        	n=n+1;
        	break;
    	case 2:
        	cout<<"Enter the position of element you want to delete\n";
        	cin>>pos;
        	for(i=pos;i<n;i++)
        	{
            	a[i]=a[i+1];
        	}
        	n=n-1;
        	break;
    	case 3:
        	flag=0;
        	cout<<"\nEnter the element You want to search: ";
        	cin>>ele;
        	for(i=0;i<n;i++)
        	{
        	    if(a[i]==ele)
            	{
                	cout<<"\nThe Position of the Element is: "<<i+1;
                	flag=1;
                	break;
            	}
        	}
        	if(flag==0)
            	cout<<"\nElement not found";
        	break;
    	case 4:
        	for(i=0;i<n;i++)
        	{
            	cout<<a[i]<<" ";
        	}
        	cout<<endl;
        	break;
    	}
    	cout<<"\nSpecify Operation Again: ";
    	cin>>in;
	}
}

