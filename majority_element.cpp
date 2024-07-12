#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
 int maxCount = 0;
    int index = -1; 
    for (int i = 0; i <size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == a[j])
                count++;
    }
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > size/ 2)
        cout << a[index] << endl;

    else
        cout << "No Majority Element" << endl;

}
