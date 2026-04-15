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

// Pseudocode 
START

  READ n
  
  CREATE arr[n]
  
  FOR i = 0 TO n - 1 DO
      READ arr[i]
  END FOR

  FOR i = 1 TO n - 1 DO
      temp = arr[i]
      j = i - 1
      
      WHILE j >= 0 AND arr[j] > temp DO
          arr[j + 1] = arr[j]
          j = j - 1
      END WHILE
      
      arr[j + 1] = temp
  END FOR

  FOR i = 0 TO n - 1 DO
      IF i > 0 THEN
          PRINT " "
      END IF
      PRINT arr[i]
  END FOR
  
  PRINT newline

END

// Algorithm
1. START
2. INPUT n
3. INPUT n elements into array arr
4. SET i = 1
5. REPEAT 6 to 10 WHILE i < n
6. SET temp = arr[i]
7. SET j = i - 1
8. REPEAT 9 WHILE j >= 0 AND arr[j] > temp
9. SET arr[j + 1] = arr[j] AND SET j = j - 1
10. SET arr[j + 1] = temp AND SET i = i + 1
11. PRINT array arr
12. STOP

// Time Complexity
Best Case: O(n)
Worst Case: O(n2)
Average Case: O(n2)
