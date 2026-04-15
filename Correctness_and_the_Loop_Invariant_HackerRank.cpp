#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &it : arr)
        cin >> it;
    for (int i = 1; i <= n; ++i)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; ++i)
    {
        if (i)
        {
            cout << " ";
        }
        cout << arr[i];
    }
    return 0;
}
