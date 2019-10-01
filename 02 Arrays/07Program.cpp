#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n)
{
    int multi = 1;
    for (int i = 0; i < n; i++)
        multi *= arr[i];
    return multi;
}

int main()
{
    int t, n, arr[100], total = 0;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        total = multiply(arr, n);
        cout << total << endl;
        t--;
    }
    return 0;
}