#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(90<n && n<=100)
	{
		cout<<"A grade";
	}
	else if(80<n && n<=90)
	{
		cout<<"B grade";
	}
	else if(70<n && n<=80)
	{
		cout<<"C grade";
	}
	else if(60<n && n<=70)
	{
		cout<<"D grade";
	}
	else if(50<n && n<=60)
	{
		cout<<"E grade";
	}
	else
	{
		cout<<"F";
	}
	
}
