#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase, i, j;

    long long size;

    cin >> testCase;

    while (testCase != 0)
    {
        cin >> size;

        int myArray[size];

        // Inserting elements in the myArray
        for (i = 0; i < size; i++)
        {
            cin >> myArray[i];
        }

        int flag = 0;
        for (j = size - 1; j >= 0; j--)
        {
            if (myArray[j] == 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << j;
        }
        else
        {
            cout << -1;
        }
        cout << endl;

        testCase--;
    }

    return 0;
}