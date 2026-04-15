#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    for (int repeat = 0; repeat < n; ++repeat)
    {
        int min_ = v[repeat];
        int pos = repeat;
        for (int j = repeat; j < n; ++j)
        {
            if (min_ > v[j])
            {
                min_ = v[j];
                pos = j;
            }
        }
        swap(v[repeat], v[pos]);
    }
    for (int i = 0; i < n; ++i)
    {
        if (i)
        {
            cout << " ";
        }
        cout << v[i];
    }
    cout << '\n';
}

// Pseudocode
1. START

2. INPUT n

3. CREATE array/vector v of size n

4. FOR each element in v
      INPUT value

5. FOR repeat = 0 to n-1

      SET min = v[repeat]
      SET pos = repeat

      FOR j = repeat to n-1
            IF v[j] < min THEN
                  min = v[j]
                  pos = j
            END IF
      END FOR

      SWAP v[repeat] with v[pos]

   END FOR

6. FOR i = 0 to n-1
      PRINT v[i] with space
   END FOR

7. PRINT newline

8. END

// Algorithms

1. START
2. INPUT n
3. INPUT n elements into array v
4. SET repeat = 0
5. REPEAT 6 to 12 WHILE repeat < n
6. SET min_ = v[repeat] AND SET pos = repeat
7. SET j = repeat
8. REPEAT 9 to 10 WHILE j < n
9. IF min_ > v[j] THEN SET min_ = v[j] AND SET pos = j
10. SET j = j + 1
11. SWAP v[repeat] AND v[pos]
12. SET repeat = repeat + 1
13. PRINT array v
14. STOP

// Time complexity
For all Case O(n²)
Space complexity is O(1)
