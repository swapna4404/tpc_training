#include<iostream>
using namespace std;
int main()
{
	int n,k=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			cout<<" ";
		}
		cout<<k;
		for(int j=1;j<=(2*n-3*i)+i-1;j++)
		{
			cout<<" ";
		}
		if(k!=n)
		{
			cout<<k;
			k++;
		}
		cout<<endl;
	}
	k--;
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			cout<<" ";
		}
		cout<<k;
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<" ";
		}
		cout<<k;
		k--;
		cout<<endl;
	}
		
	}

