#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t, length, breadth, divisor, nos, res = 1;
    cin >> t;
    while (t != 0)
    {
        cin >> length >> breadth;
        if (length != breadth)
        {
            divisor = gcd(length, breadth);
            nos = (length / divisor) * (breadth / divisor);
            cout << nos << endl;
        }
        else if (length == breadth)
        {
            cout << 1 << endl;
        }
        t--;
    }
    return 0;
}