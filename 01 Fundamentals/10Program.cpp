#include <bits/stdc++.h>
using namespace std;

int min(int x, int y)
{
    return (x < y) ? x : y;
}

int calcAngle(double h, double m)
{

    if (h < 0 || m < 0 || h > 12 || m > 60)
        printf("Wrong input");

    if (h == 12)
        h = 0;
    if (m == 60)
        m = 0;

    int hour_angle = 0.5 * (h * 60 + m);
    int minute_angle = 6 * m;

    int angle = abs(hour_angle - minute_angle);

    angle = min(360 - angle, angle);

    return angle;
}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {

        int hour, minute, fres;
        cin >> hour >> minute;
        fres = calcAngle(hour, minute);
        cout << fres << endl;
        t--;
    }
    return 0;
}
