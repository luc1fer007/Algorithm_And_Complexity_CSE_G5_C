#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int p, int r)
{
    int x = a[r];
    int i = p - 1;
    for (int j = p; j < r; ++j)
    {
        if (a[j] <= x)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &it : arr)
        cin >> it;
    int q = partition(arr, 0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        (i) ? cout << " " : cout << "";
        if (i == q)
        {
            cout << "[" << arr[i] << "]";
        }
        else
            cout << arr[i];
    }
    cout << '\n';
    return 0;
}
