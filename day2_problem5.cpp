#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int j=n;j>0;j--)
	{
		for(int i=0;i<n-j;i++)
		{
			cout<<" ";
		}
		for(int i=2*j-1;i>0;i--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
