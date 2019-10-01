#include <iostream>
using namespace std;

int main()
{

    int x = 20;
    int y = 10;
    const int *ptr = &x;       // non-const pointer to const int
    int *const ptr = &x;       // const pointer to non-const int
    const int *const ptr = &x; // const pointer to const int
    int const *ptr = &x;       // non-const pointer to const int

    return 0;
}