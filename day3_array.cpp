#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[6];
	int n=4;
	int index=2;
	int target=8;
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	cout<<"Before adding element"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"after adding element"<<endl;
	for(int i=n-1;i>index;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[index]=target;
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
}
