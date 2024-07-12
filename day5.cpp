#include<iostream>
using namespace std;
int main()
{
	int n,target;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>target;
	int count=0;
	bool f=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==target)
			{
				count++;
				f=1;
				break;
			}
		}
	}
	cout<<count<<endl;
	if(f)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	
}
