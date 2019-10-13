#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<vector<int>> arrayList;
    vector<int> kList;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        kList.push_back(k);
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        arrayList.push_back(v);
    }
    for (int i = 0; i < arrayList.size(); i++)
    {
        // arrayList[0] will denote first array
        // kList[0] will denote first array's k value
        // algo:
        /*
   1. reverse k element in the array
   2. reverse n-k element in the array
   3. reverse entire array
   */
        // reverse k element in the array
        int n = arrayList[i].size();
        int k = kList[i];
        for (int l = n - k, h = n - 1; l < h; l++, h--)
        {
            int tmp = arrayList[i][l];
            arrayList[i][l] = arrayList[i][h];
            arrayList[i][h] = tmp;
        }
        //reverse n-k element
        for (int l = 0, h = n - k - 1; l < h; l++, h--)
        {
            int tmp = arrayList[i][l];
            arrayList[i][l] = arrayList[i][h];
            arrayList[i][h] = tmp;
        }
        //reverse entire array
        for (int l = 0, h = n - 1; l < h; l++, h--)
        {
            int tmp = arrayList[i][l];
            arrayList[i][l] = arrayList[i][h];
            arrayList[i][h] = tmp;
        }
        for (int j = 0; j < n; j++)
        {
            cout << arrayList[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}