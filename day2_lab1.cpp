#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int r,sum=0;
	r=n;
	while(n>0)
	{
		sum=sum*10+(n%10);
		n=n/10;
	}
	cout<<"reverse of the number  "<<sum<<endl;
	if(r==sum)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
}
