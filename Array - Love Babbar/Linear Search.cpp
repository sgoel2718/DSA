#include <iostream>
using namespace std;
int main()
{
int t,i,n,ele,flag=0,pos=0;
cout<<"Enter no of test case: ";
cin>>t;
for(i=0;i<t;i++)
{
	cout<<"Enter no of elements: ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements: ";
		cin>>a[i];
	}
	cout<<"Enter searched element: ";
	cin>>ele;
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			flag=1;
			//pos=i;
			break;
		}
		
	}
	if(flag==1)
		cout<<"Element found at index "<<i<<endl;

	else
		cout<<"Searched element not found"<<endl;
	
}
}

