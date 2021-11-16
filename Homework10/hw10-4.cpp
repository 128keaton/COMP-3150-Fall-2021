#include <iostream>
using std::cout;

class Foo {
public:
	int x;
	Foo(const int x) : x(x) {
        cout << " called \r\n";
    }
};

void display1(Foo f) {cout << f.x << '\n';}

void display2(const Foo & f) {cout << f.x << '\n';}

class Bar {
public:
	Foo f;
	Bar(const Foo & f) : f(f) {}
};

int main()
{
	Foo a(1);
	Foo b(a);
	Foo c = Foo(2);
	Foo d = Foo(c);
	Foo * ep = new Foo(3);
	Foo * fp = new Foo(*ep);
	display1(b);
	display2(d);
	Bar g(*fp);
	delete fp;
	delete ep;
}