#include <iostream>
using std::cout;
using std::cin;


#include <iomanip>
using std::setw;
using std::setfill;
using std::internal;
using std::setprecision;
using std::fixed;

int main() {
	int x = -17;
	double y = 12.3456789;

	cout << x << ' ' << y << '\n';
	cout << setw(5) << setfill('0') << internal << x << '\n';

	// 	setprecision is sticky,	       switch to using fixed precision
	cout << setprecision(5) << y << ' ' << fixed << y << '\n';

	cin >> x;
	cout << x << '\n';

	cin >> y;
	cout << y << '\n';
}
