#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int num;
        cin >> num;
        while (num >= 10)
        {
            num = num / 10;
        }
        cout << num << endl;
        t--;
    }
}