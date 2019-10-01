#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    double d;
    void *vptr;
    vptr = &a;
    cout << vptr << endl;

    vptr = &d;
    cout << vptr << endl;

    int b = 20;
    cout << b << endl;
    int *iptr = &a;
    int **iiptr = &iptr;
    cout << iiptr << endl;
    cout << *iiptr << endl;
    cout << **iiptr << endl;
    cout << iptr << endl;
    cout << *iptr << endl;

    return 0;
}