#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    cout << "Address of a: " << &a << endl;
    int *p = &a;
    cout << "Value of p: " << p << endl;
    cout << "Value of a: " << *p << endl;

    return 0;
}