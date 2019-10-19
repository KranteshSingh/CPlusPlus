#include <bits/stdc++.h>
using namespace std;
#include <cmath>
#include <algorithm>

int main()
{
    long long testCase, num;
    cin >> testCase;

    while (testCase != 0)
    {
        cin >> num;
        int len, i;
        len = log10(num) + 1;
        int myArray[len];

        for (i = 0; i < len; i++)
        {
            myArray[i] = num % 10;
            num /= 10;
        }

        int n1 = sizeof(myArray) / sizeof(myArray[0]);
        sort(myArray, myArray + n1);

        int flag = 0;
        for (int j = 0; j < len - 1; j++)
        {
            if (myArray[j + 1] - myArray[j] != 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        testCase--;
    }

    return 0;
}