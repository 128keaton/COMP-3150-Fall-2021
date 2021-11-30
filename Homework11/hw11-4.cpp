#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
	string s, t;
	cin >> s >> t;
	cout << (operator==(s, t))
	     << ' '
	     << (operator+(s, t) < operator+(t, s))
	     << '\n';

	for (size_t i = 0; i < s.length() - 1; ++i)
        (s.operator[](i)) = s.operator[]((i + 1));

	t.operator=(s);
	cout << t << '\n';
}