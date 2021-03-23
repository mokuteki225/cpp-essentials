#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	try
	{
		if(num2 == 0)
			throw 1;
		if(num2 == 1)
			throw 2;
		cout << num1 / num2;
	}
	catch(int i)
	{
		cout << "error №: " << i;
	}

	return 0;
}