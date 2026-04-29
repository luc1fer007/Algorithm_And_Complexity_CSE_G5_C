#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
const int n = 500000;
int a[n];

void merge(int left, int mid, int right)
{
    int l[n / 2];
    int r[n / 2];
    int i, j, idx;

    for (i = left; i <= mid; i++)
        l[i - left] = a[i];

    for (i = mid + 1; i <= right; i++)
        r[i - mid - 1] = a[i];

    i = 0;
    j = 0;
    idx = left;

    while (i <= (mid - left) && j <= (right - mid - 1))
    {
        if (l[i] < r[j])
            a[idx++] = l[i++];
        else
            a[idx++] = r[j++];

        cnt++;
    }

    while (i <= (mid - left))
    {
        a[idx++] = l[i++];
        cnt++;
    }

    while (j <= (right - mid - 1))
    {
        a[idx++] = r[j++];
        cnt++;
    }

    return;
}

void mergeSort(int left, int right)
{
    int mid = (left + right) / 2;

    if (left < right)
    {
        mergeSort(left, mid);
        mergeSort(mid + 1, right);
        merge(left, mid, right);
    }
    return;
}

int main()
{
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    mergeSort(0, n - 1);
    for (i = 0; i < n; ++i)
    {
        (i) ? cout << " " : cout << "";
        cout << a[i];
    }
    cout << '\n';
    cout << cnt << "\n";
    return 0;
}
