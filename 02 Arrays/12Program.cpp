#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase, nov, ballot[1000000];
    cin >> testCase;
    while (testCase != 0)
    {
        cin >> nov;
        for (int i = 0; i < nov; i++)
        {
            cin >> ballot[i];
        }

        int flag = 0;
        for (int i = 0; i < nov; i++)
        {
            if (ballot[i] == 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "hard";
        }
        else
        {
            cout << "easy";
        }
        cout << endl;

        testCase--;
    }

    return 0;
}