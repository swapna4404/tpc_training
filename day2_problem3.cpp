#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="A di ty a  ";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!=' ')
		{
			cout<<str[i];
		}
	}
}
