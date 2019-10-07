#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase, i, j, size, harray[100];
    cin >> testCase;
    while (testCase != 0)
    {
        // Inserting elements into the array
        cin >> size;
        for (i = 0; i < size; i++)
        {
            cin >> harray[i];
        }

        int flag = 0;
        // Checking if 0th element of array is greater than 1st element
        if (harray[0] > harray[1])
        {
            cout << 0 << " ";
            flag = 1;
        }

        // Checking if nth element is greater than second last element
        else if (harray[size - 1] > harray[size - 2])
        {
            cout << size - 1 << " ";
            flag = 1;
        }

        // loop to iterate over the elements of the array and checking if any element is greater than its neighbout

        for (j = 1; j < size - 1; j++)
        {
            if (harray[j] > harray[j - 1] && harray[j] > harray[j + 1])
            {
                cout << j << " ";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << " ";
        }

        cout << endl;

        testCase--;
    }
    return 0;
}