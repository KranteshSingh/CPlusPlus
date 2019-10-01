#include <iostream>
using namespace std;

bool checkYear(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) ||
            (year % 400 == 0));
}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int year;
        cin >> year;

        checkYear(year) ? cout << "Yes\n" : cout << "No\n";
        t--;
    }

    return 0;
}