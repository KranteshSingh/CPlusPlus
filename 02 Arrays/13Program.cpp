#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase, i, j, min, res, size, harray[100];
    cin >> testCase;
    while (testCase != 0)
    {
        // Inserting elements into the array
        cin >> size;
        for (i = 0; i < size; i++)
        {
            cin >> harray[i];
        }

        min = harray[0];
        res = 0;
        // Checking each element of the array whether it is lesser than min element that we have selected as minimum
        for (j = 1; j < size; j++)
        {
            if (harray[j] < min)
            {
                min = harray[j];
                res = j;
            }
        }

        cout << res;

        cout << endl;

        testCase--;
    }

    return 0;
}