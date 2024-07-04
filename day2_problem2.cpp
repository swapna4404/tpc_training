#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<=j;i++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int j=0;j<n;j++)
	{
		for(int i=n-j-1;i>0;i--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
