#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,target;
	cin>>n;
	int a[n];
	bool f=false;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	cin>>target;
	for(int i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			f=true;
			break;
		}
	}
	if(f)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}
