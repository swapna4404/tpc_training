#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,target;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>target;
	sort(a,a+n);
	int i=0,j=n-1;
	bool c=0;
	while(i<j)
	{
		int s=a[i]+a[j];
		if(s>target)
		{
			j--;
		}
		else if(s<target)
		{
			i++;
		}
		else
		{
			c=1;
			cout<<i<<" "<<j<<endl;
			break;
			
		}
	}
	if(c==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}

