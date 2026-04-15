#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], arr2[100] = {0}, i;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        arr2[arr[i]]++;
    }
    for (auto &it : arr2)
    {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
