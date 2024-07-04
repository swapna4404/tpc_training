#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//1.
	int n;
	cin>>n;
	if(n%2==0)
	{
		cout<<"even number"<<endl;
	}
	else
	{
		cout<<"odd number"<<endl;
	}
	
	//2.
	int a,b,c;
	cin>>a>>b>>c;
	int ans=(a>b)?(a>c?a:c):(b>c?b:c);
	cout<<"biggest number "<<ans<<endl;
	
	//3.
	double p,r,t;
	cin>>p>>r>>t;
	cout<<"simple interest "<<(p*r*t)/100<<endl;
	
	//4.
	int d;
	cin>>d;
	cout<<"square root of the number "<<sqrt(d)<<endl;
	
	//5.
	int e;
	cin>>e;
	int f=0;
	for(int i=2;i*i<=e;i++)
	{
		if(e%i==0)
		{
			f++;
		}
	}
	if(f==0)
	{
		cout<<"prime"<<endl;
	}
	else
	{
		cout<<"not prime"<<endl;
	}
	
	//6.
	int g,s;
	cin>>g;
	while(g>0)
	{
		s=g%10;
		g=g/10;
	}
	cout<<"first digit of the number is  "<<s<<endl;
	
	return 0;
}
