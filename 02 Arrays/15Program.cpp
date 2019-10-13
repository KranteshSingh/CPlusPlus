#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase, i, z;

    long long size, key, diff;
    cin >> testCase;
    while (testCase != 0)
    {
        cin >> size >> key;

        int myArray[size], newArray[size];

        // Inserting elements in the myArray
        for (i = 0; i < size; i++)
        {
            cin >> myArray[i];
        }

        // handling the case where key is greater than size
        (key < size) ? diff = size - key : diff = size - (key % size);

        // Copying elements in the newArray from size-key to size of the myArray
        int j = 0;
        for (i = diff, j = 0; i < size; i++, j++)
        {
            newArray[j] = myArray[i];
        }

        // Copying the elements in the newArray from 0th element to size-key element of myArray to newArray
        for (i = 0; i < diff; i++, j++)
        {
            newArray[j] = myArray[i];
        }

        // Printing out the final output
        for (z = 0; z < size; z++)
        {
            cout << newArray[z] << " ";
        }

        cout << endl;

        testCase--;
    }

    return 0;
}