#include <bits/stdc++.h>
using namespace std;
int main()
{
    int myArray[100], result[100];
    int testCase, size, i, j, t = 0;
    bool isPrime = true;
    cin >> testCase;
    while (testCase != 0)
    {
        cin >> size;
        for (i = 0; i < size; i++)
        {
            cin >> myArray[i];
        }
        for (i = 0; i < size; i++)
        {
            isPrime = true;
            for (j = 2; j < myArray[i]; j++)
            {
                if (myArray[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime == true)
            {
                result[t] = myArray[i];
                t++;
            }
        }
        for (i = 0; i < t; i++)
        {
            if (result[i] == 1)
            {
            }

            else
            {
                cout << result[i] << " ";
                cout << endl;
            }
        }
        t = 0;
        testCase--;
    }
    return 0;
}