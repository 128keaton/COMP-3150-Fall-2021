#include <iostream>
using std::cout;

template<typename T>
T * resize(T * p, size_t n, size_t m);

int main()
{
    int * p = new int[5] {5, 7, 9, 11, 13};
    p = resize(p, 5, 6);
    p[5] = 15;
    for (size_t i = 0; i < 6; ++i)
        cout << p[i] << ' ';
    cout << '\n';
    delete[] p;

    double * q = new double[4] {2.5, 4.5, 6.5, 8.5};
    q = resize(q, 4, 3);
    for (size_t i = 0; i < 3; ++i)
        cout << q[i] << ' ';
    cout << '\n';
    delete[] q;
}


template<typename T>
T * resize(T * p, size_t n, size_t m)
{
    size_t smallest_size = (n > m ? m : n);

    T *new_arr = new T[m];

    for (int i = 0; i < smallest_size; i++) {
        new_arr[i] = p[i];
    }

    delete[] p;

    return new_arr;
}