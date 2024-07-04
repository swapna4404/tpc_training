#include<iostream>
using namespace std;
#include<climits> 
int main()
{
	int a,b;
	cin>>a>>b;
	int s,r;
	int d=min(a,b);
	for(int i=2;i<=d;i++)
	{
		if(a%i==0 && b%i==0)
		{
		  r=i;
		}
		s=max(s,r);
	}
	cout<<s;
}
