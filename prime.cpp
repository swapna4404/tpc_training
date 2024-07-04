#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int f=0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	if(f==0)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
}
