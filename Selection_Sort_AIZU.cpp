#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &it : arr)
    {
        cin >> it;
    }
    int count = 0;
    for (int repeat = 0; repeat < n; ++repeat)
    {
        int min_ = arr[repeat];
        int pos = repeat;
        for (int j = repeat; j < n; ++j)
        {
            if (min_ > arr[j])
            {
                min_ = arr[j];
                pos = j;
            }
        }
        if(pos != repeat)
        {
            swap(arr[repeat], arr[pos]);
            count++;
        }
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
    cout << count << '\n';
}
