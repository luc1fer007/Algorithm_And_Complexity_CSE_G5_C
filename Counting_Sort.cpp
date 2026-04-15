// "Don't use array use vectors it will give good outputs"
// Array
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
    int mx = INT_MIN;
    for (auto &it : arr)
    {
        if (mx < it)
        {
            mx = it;
        }
    }
    int res = mx + 1;
    int arr2[res];
    for (int i = 0; i < res; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < n; ++i)
    {
        arr2[arr[i]]++;
    }
    for (int i = 0; i < res; i++)
    {
        cout << arr2[i] << " ";
    }
}

// PseudoCode
START
  READ n
  CREATE arr[n]
  
  FOR i = 0 TO n - 1 DO
      READ arr[i]
  END FOR

  mx = INT_MIN
  FOR i = 0 TO n - 1 DO
      IF mx < arr[i] THEN
          mx = arr[i]
      END IF
  END FOR

  res = mx + 1
  CREATE arr2[res]

  FOR i = 0 TO res - 1 DO
      arr2[i] = 0
  END FOR

  FOR i = 0 TO n - 1 DO
      arr2[arr[i]] = arr2[arr[i]] + 1
  END FOR

  FOR i = 0 TO res - 1 DO
      PRINT arr2[i]
      PRINT " "
  END FOR
END

// Algorithm
1. START
2. INPUT n
3. INPUT n elements into array arr
4. SET mx = INT_MIN
5. SET i = 0
6. REPEAT 7 to 8 WHILE i < n
7. IF mx < arr[i] THEN SET mx = arr[i]
8. SET i = i + 1
9. SET res = mx + 1
10. CREATE array arr2 of size res
11. SET j = 0
12. REPEAT 13 to 14 WHILE j < res
13. SET arr2[j] = 0
14. SET j = j + 1
15. SET k = 0
16. REPEAT 17 to 18 WHILE k < n
17. SET arr2[arr[k]] = arr2[arr[k]] + 1
18. SET k = k + 1
19. SET l = 0
20. REPEAT 21 to 22 WHILE l < res
21. PRINT arr2[l] AND PRINT space
22. SET l = l + 1
23. STOP

// Time complexity
Best Case: O(n+mx)
Worst Case: O(n+mx)
Average Case: O(n+mx)
