#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			if(i==0 || j==0)
			{
				c=1;
			}
			else
			{
				c=(c*(i-j+1))/j;
			}
			cout<<c<<" ";
		}
		cout<<endl;
	}
}
