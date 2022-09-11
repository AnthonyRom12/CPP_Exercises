/* Natural logarithm */


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x;
	cout << "Please enter number for calculation natural logarithm: ";
	cin >> x;
  
	// log1p equal ln(1 + x) = x - (pow(x, 2) / 2) + (pow(x, 3) / 3) - (pow(x, 4) / 4) + ... (pow(x, n) / n)
	cout << "Natural logarithm is : " << log1p(1 + x);
	return 0;
}
