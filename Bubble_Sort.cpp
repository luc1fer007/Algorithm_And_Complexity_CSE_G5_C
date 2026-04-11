//O based indexing, using array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], count = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (i)
        {
            cout << ' ';
        }
        cout << arr[i];
    }
    cout << '\n';
    cout << count << '\n';
    return 0;
}

// 1 based indexing, using array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1], count = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << arr[i];
        if (i < n)
        {
            cout << ' ';
        }
    }
    cout << '\n';
    cout << count << '\n';
    return 0;
}

// Pseudocode 
START

INPUT n

DECLARE array arr of size n+1
SET count = 0

FOR i = 1 to n
    INPUT arr[i]
END FOR

FOR i = 1 to n
    FOR j = 1 to n-1
        IF arr[j] > arr[j+1]
            SWAP arr[j] and arr[j+1]
            count = count + 1
        END IF
    END FOR
END FOR

FOR i = 1 to n
    PRINT arr[i]
    IF i < n
        PRINT space
    END IF
END FOR

PRINT newline
PRINT count

END

// Algorithm
1. START
2. INPUT n (size of array)
3. DECLARE array arr of size n+1
4. INITIALIZE count = 0
5. FOR i = 1 to n
6. INPUT arr[i]
   END FOR

7. FOR i = 1 to n
8. FOR j = 1 to n - 1

9. IF arr[j] > arr[j + 1] THEN
10. SWAP arr[j] and arr[j + 1]
11. count = count + 1
     END IF
   END FOR
  END FOR
12. FOR i = 1 to n
13. PRINT arr[i]
    END FOR
14. PRINT newline
15. PRINT count
16. END

// Time Complexity
1. Best Case O(n²)
2. Average Case O(n²)
3. Worst Case O(n²)
