#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int res[100] = {0};
    for (int i = 0; i < n; ++i)
    {
        res[arr[i]]++;
    }
    for (int i = 0; i < 100; ++i)
    {
        while (res[i] != 0)
        {
            cout << i << " ";
            res[i]--;
        }
    }
    cout << '\n';
    return 0;
}
