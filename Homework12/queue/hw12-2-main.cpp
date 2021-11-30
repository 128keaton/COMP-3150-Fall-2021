#include "hw12-2-Queue.h"

#include <iostream>
using std::cout;

int main()
{
	Queue a;
	a.enqueue(3);
	a.enqueue(5);
	a.enqueue(7);
	cout << a.dequeue() << '\n';   // should print 3
	a.enqueue(9);
	cout << a.dequeue() << '\n';   // should print 5
	cout << a.dequeue() << '\n';   // should print 7
	a.enqueue(11);

	Queue b = a;
	cout << b.dequeue() << '\n';   // should print 9
	a.enqueue(13);
	cout << a.dequeue() << '\n';   // should print 9
	b.enqueue(13);
	cout << (a == b) << '\n';      // should print 1

	cout << b.dequeue() << '\n';   // should print 11
	cout << (a == b) << '\n';      // should print 0
	b.enqueue(13);
	cout << (a == b) << '\n';      // should print 0
	cout << a.dequeue() << '\n';   // should print 11
	cout << b.dequeue() << '\n';   // should print 13
	cout << (a != b) << '\n';      // should print 0
}