#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	/*" * * * *
		* * * *
		* * * *"*/
	for(int i=0;i<n;i++)      
	{							
		for(int j=0;j<n;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	/*
	"*
	 * *
	 * * *"*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	/*
	   *
	  **
	 ***
	****
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	/* 
	    *
	  * * *
	* * * * *
	*/
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	/*
	1
	12
	123
	1234
	12345
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=2*i;j++)
		{
			cout<<j+1;
		}
		cout<<endl;
	}
	
}
