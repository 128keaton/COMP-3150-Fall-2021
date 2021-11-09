#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using std::pow;

int main() {
	int base, exponent;

	cout << "Enter base (positive integer): ";
	cin >> base;

	cout << "Enter exponent (positive integer): ";
    cin >> exponent;

    unsigned long long *results =  new unsigned long long[exponent];

    for (int i = exponent; i > 0; i--) {
        results[i] = pow(base, i);
    }

    for (int i = sizeof(results) - 1; i > 0; i-- ) {
        cout << base << " to the power " << i << " is " << results[i] << endl;
    }

     delete [] results;
}








