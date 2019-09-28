#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int hour, minute;
        float hmin, hAngle, mAngle;
        cin >> hour >> minute;
        hmin = (float)minute / 60;
        hAngle = (hour + hmin) * 30;
        mAngle = hmin * 300;

        cout << hAngle - mAngle << endl;

        t--;
    }

    return 0;
}