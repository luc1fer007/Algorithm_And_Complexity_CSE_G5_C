#include <bits/stdc++.h>
using namespace std;

void magicSquare(int n)
{
    vector<vector<int>> magic(n, vector<int>(n, 0));

    int i = n / 2;
    int j = n - 1;

    for (int num = 1; num <= n * n; num++)
    {
        magic[i][j] = num;

        i = i - 1;
        j = j + 1;

        if (i == -1 && j == n)
        {
            i = 0;
            j = n - 2;
        }
        else
        {
            if (i == -1)
                i = n - 1;
            if (j == n)
                j = 0;

            if (magic[i][j] > 0)
            {
                i = i + 1;
                j = j - 2;
            }
        }
    }

    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            cout << magic[x][y] << " ";
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 1)
        cout << 1 << '\n';
    else
        magicSquare(n);

    return 0;
}

// Algorithm
Input: n (odd number)

Create matrix magic[n][n] and initialize all to 0

i = n / 2
j = n - 1

for num = 1 to n*n:

    magic[i][j] = num

    new_i = i - 1
    new_j = j + 1

    if new_i == -1 and new_j == n:
        i = 0
        j = n - 2
    else:
        if new_i == -1:
            new_i = n - 1
        if new_j == n:
            new_j = 0

        if magic[new_i][new_j] is not empty:
            i = i + 1
            j = j - 2
        else:
            i = new_i
            j = new_j

Print matrix

// PseudoCode
MagicSquare(n):

    create matrix magic[n][n] and fill with 0

    i = n / 2
    j = n - 1

    for num = 1 to n*n:

        magic[i][j] = num

        new_i = i - 1
        new_j = j + 1

        if new_i == -1 and new_j == n:
            i = 0
            j = n - 2

        else:
            if new_i == -1:
                new_i = n - 1
            if new_j == n:
                new_j = 0

            if magic[new_i][new_j] != 0:
                i = i + 1
                j = j - 2
            else:
                i = new_i
                j = new_j

    print magic matrix
