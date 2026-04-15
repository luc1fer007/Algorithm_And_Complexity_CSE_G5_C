#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (auto &it : arr)
    {
        cin >> it;
    }
    for (int i = 1; i < n; ++i)
    {
        int j, temp = 0;
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
            for (int i = 0; i < n; ++i)
            {
                if (i)
                {
                    cout << " ";
                }
                cout << arr[i];
            }
            cout << '\n';
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
    cout << '\n';
    return 0;
}
