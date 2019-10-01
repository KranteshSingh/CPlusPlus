#include <iostream>
using namespace std;
int main()
{
    int marks[6] = {10, 20, 30, 40, 50, 60};

    cout << marks << endl;
    cout << &marks[0] << endl;
    cout << marks[0] << endl;
    cout << *marks << endl;

    cout << marks + 1 << endl;
    cout << &marks[1] << endl;
    cout << marks[1] << endl;
    cout << *(marks + 1) << endl;

    cout << marks + 2 << endl;
    cout << &marks[2] << endl;
    cout << marks[2] << endl;
    cout << *(marks + 2) << endl;

    cout << marks + 3 << endl;
    cout << &marks[3] << endl;
    cout << marks[3] << endl;
    cout << *(marks + 3) << endl;

    cout << marks + 4 << endl;
    cout << &marks[4] << endl;
    cout << marks[4] << endl;
    cout << *(marks + 4) << endl;

    cout << sizeof(marks) << endl;

    int *p = marks;
    cout << sizeof(p) << endl;

    return 0;
}