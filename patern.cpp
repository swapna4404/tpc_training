#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=n-i-1;j>0;j--)
		{
			cout<<" ";
		}
		int k;
		for(k=0;k<=i;k++)
		{
			cout<<k+1;
		}
		k--;
		while(k>0)
		{
			cout<<k;
			k--;
		}
		cout<<endl;
	}
}
