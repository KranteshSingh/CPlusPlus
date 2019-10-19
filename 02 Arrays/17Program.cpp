// https://codeforces.com/contest/1234/problem/A

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int q;
    cin >> q;
    while (q--)
    {
        int size;
        float result = 0, finres = 0;
        cin >> size;
        long long numArray[size];

        for (int i = 0; i < size; i++)
        {
            cin >> numArray[i];
        }

        for (int j = 0; j < size; j++)
        {
            result += numArray[j];
        }

        finres = ceil(result / size);
        cout << finres;
    }

    return 0;
}
