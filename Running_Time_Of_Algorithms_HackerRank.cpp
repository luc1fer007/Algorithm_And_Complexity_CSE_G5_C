#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], i, count = 0;
    for (auto &it : arr)
    {
        cin >> it;
    }
    for (i = 1; i < n; ++i)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = temp;
    }
    cout << count << '\n';
}
