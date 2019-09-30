#include <bits/stdc++.h>
using namespace std;

int multiplyBy2(int n)
{
    int rem, value;
    rem = n % 10;
    switch (rem)
    {
    case 0:
        value = 0;
        break;
    case 5:
        value = 1;
        break;
    default:
        value = -1;
    }
    return value;
}
int main()
{
    int t, num;
    cin >> t;
    while (t != 0)
    {

        cin >> num;
        cout << multiplyBy2(num) << endl;
        t--;
    }
}