#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int main()
{
    int testCase;
    long long size;
    cin >> testCase;

    while (testCase != 0)
    {
        cin >> size;
        int i;
        long long myArray[size];

        /// Inserting elements into the array
        for (i = 0; i < size - 1; i++)
        {
            cin >> myArray[i];
        }

        //Sorting the array
        int n1 = sizeof(myArray) / sizeof(myArray[0]);
        sort(myArray, myArray + (n1 - 1));

        int flag = 0;

        for (i = 0; i < size; i++)
        {
            if (myArray[i] != i + 1)
            {
                cout << i + 1;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << size;

        cout << endl;

        testCase--;
    }

    return 0;
}