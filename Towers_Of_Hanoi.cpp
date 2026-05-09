#include <bits/stdc++.h>
using namespace std;
void toh(int n, char A, char B, char C)
{
    if (n > 0)
    {
        toh(n - 1, A, C, B);
        cout << "Move disk " << n << " from " << A << " --> " << C << '\n';
        toh(n - 1, B, A, C);
    }
}
int main()
{
    int n;
    cin >> n;
    toh(n, 'A', 'B', 'C');
    return 0;
}

// Algorithm
Algorithm TOH(n, A, B, C)

BEGIN
    IF (n > 0) THEN
        TOH(n-1, A, C, B)
        PRINT "Move disk ", n, " from ", A, " --> ", C
        TOH(n-1, B, A, C)
    END IF
END

// Pseudocode
  BEGIN

    READ n

    CALL TOH(n, 'A', 'B', 'C')

END


PROCEDURE TOH(n, A, B, C)

    IF n > 0 THEN

        TOH(n - 1, A, C, B)

        PRINT "Move disk ", n, " from ", A, " --> ", C

        TOH(n - 1, B, A, C)

    END IF

END PROCEDURE
