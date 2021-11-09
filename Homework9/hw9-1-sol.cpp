#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;
using std::setfill;
using std::fixed;
using std::setprecision;
using std::max;

int main() {
	float x, y;

	cout << "Enter two floating-point numbers: ";
	cin >> x;
    cin >> y;

	float maxNum = max(x, y);

	cout << "Maximum is ";
	cout << setw(9) << setfill('0') << fixed << setprecision(4)  << x << endl;
}








