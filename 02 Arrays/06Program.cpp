#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
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
        total = sum(arr, n);
        cout << total << endl;
        t--;
    }
    return 0;
}