#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    int arr[100];
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        t--;
    }

    return 0;
}