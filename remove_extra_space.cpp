#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		if(i==0 && str[i]==' ')
		{
			continue;
		}
		if(str[i]==' ')
		{
			if(str[i-1]==' ')
			{
				continue;	
			}	
		}
		cout<<str[i];
	}
}
