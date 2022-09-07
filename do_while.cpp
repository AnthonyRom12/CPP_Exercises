/******Task #2
 Program for calculation sum of even numbers using __do__while__ loop ****/


#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Please enter number: ";
	cin >> num;
	int k = 0;
	do
	{
		for (int i = 0; i < num; i++)
			if (i % 2 == 0)
				k += i;
	} while (k <= num);
	cout << "Sum of even numers are: " <<  k;
	return 0;
}
