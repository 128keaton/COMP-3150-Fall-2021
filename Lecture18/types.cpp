#include <iostream>
using std::cout;

int main() {
	bool b = false;

	// Should print 1 as true resolves to int = 1
	cout << (b || true) << '\n';

}
