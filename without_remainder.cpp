/*** Task #3
  Program is showing numbers by which num can be divided without a remainder ***/


#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Please enter number: ";
	cin >> num;
	
	//Loop statement:
	cout << "Numbers by which num can be divided without a remainder: ";
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0 && i > 0)
			cout << i << " ";
	}
	return 0;
}
