#include<iostream>
#include<string>
#include"LargeInteger.h"
using namespace std;

int main()
{
	string s;
	/*cout << "Number = ";
	getline(cin,s);*/

	/*size_t len = s.size();
	int arr[100]{},j=0;*/

	/*for (size_t i = 0; i < len; i++)
	{
		if (!isdigit(s[i]))
			cout << "\aERROR!, No digits!\n";
		else
		{
			arr[j] = s[i] - 48;
			j++;
		}
	}

	for (size_t i = 0; i < j; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/
	LargeInteger obj(s="12345678910111213141516");

	obj.print();

	return 0;
}