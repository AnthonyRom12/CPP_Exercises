/* Programm for finding two gidher dividers for two numbers */


#include <iostream>

using namespace std;

int main()
{
	int a, b, max, max1;
	cout << "Please enter numbers: ";
	cin >> a >> b;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0 && i > 0)
			max = i;
	}
	
	for (int i = 1; i < b; i++)
	{
		if (b % i == 0 && i > 0)
			max1 = i;
	}
	cout << "Higher divider for first number: " << max << endl;
	cout << "Higher divider for second number: " << max1 << endl;
	return 0;
}
