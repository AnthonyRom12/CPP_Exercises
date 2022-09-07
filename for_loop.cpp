/****Task #1 
  Programm for calculation of sum odd numbers. Using for statement. 
*****/

#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Please enter number: ";
	cin >> n;
	int k = 0;

	for (int i = 0; i < n; i++) {
		if (i % 2 != 0) {
			k = k + i;
		}
	}
	cout << "Sum of odd numbers are: " << k;
	return 0;
}
