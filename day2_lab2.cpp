#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"factorial  "<<f;
	cout<<endl;
	
	int a;
	cin>>a;
	cout<<"divisors of a number  ";
	for(int i=1;i*i<=a;i++)
	{
		if(a%i==0)
		{
			cout<<i<<" ";
			if(i!=(a/i))
			{
				cout<<a/i<<" ";
			}
		}	
	}
}
