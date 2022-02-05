#include <iostream>
using namespace std;
int main()
{
int t,i,j,n,temp,flag=0,ele,pos=0;
cin>>t;
for(i=0;i<t;i++)
{
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(a[i]>a[j])
//			{
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//			else
//			{
//				continue;	
//			}
//		}
//	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	//Binary Search begins
	cin>>ele;
	
	if(ele<a[n/2])
	{
		for(i=0;i<n/2;i++)
		{
			if(a[i]==ele)
			{
			//	pos=i;
				flag=1;
				break;
			}
			else
				continue;
			
		}
	}
	else if(ele>a[n/2])
	{
		for(i=n/2;i<n;i++)
		{
			if(a[i]==ele)
			{
			//	pos=i;
				flag=1;
				break;
			}
			else
				continue;
		}
	}
	else
	{
		i=n/2;
		flag=1;
	}
	if(flag==1)
	{
		cout<<"Element found at index "<<i<<endl;
	}
	else
	{
		cout<<"Element not found"<<endl;
	}
	}
}
