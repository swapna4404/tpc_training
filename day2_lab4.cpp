#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0,b=1,c=0;
	cout<<a<<" "<<b<<" ";
	while(c<n)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	cout<<endl;
	while(c<=n)
	{
		c=a+b;
		a=b;
		b=a;
	}
	cout<<"n th fibonacci number "<<c;
}
