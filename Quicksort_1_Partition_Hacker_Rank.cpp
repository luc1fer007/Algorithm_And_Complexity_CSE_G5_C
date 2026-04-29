#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int p, int r)
{
    int x = a[p];
    swap(a[p], a[r]);
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

void quicksort(int left, int right, int a[])
{
    if (left < right)
    {
        int p = partition(a, left, right);
        quicksort(left, p - 1, a);
        quicksort(p + 1, right, a);
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n + 1];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // quicksort(0, n - 1, a);
    partition(a, 0, n - 1);     //only one partition for the question

    for (int i = 0; i < n; i++)
    {
        (i) ? cout << " " : cout << "";
        cout << a[i];
    }
    cout << '\n';
    return 0;
}
