#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define MAX 101

using namespace std;
typedef int arr[MAX][MAX];
arr I;
arr I2;

void multiply(arr I, arr A, int dim)
{
    int res[dim][dim];
    REP(i, dim)
    REP(j, dim)
    {
        res[i][j] = 0;
        REP(k, dim)
        {
            res[i][j] += I[i][k] * A[k][j];
        }
    }
    REP(i, dim)
    REP(j, dim)
    {
        I[i][j] = res[i][j];
    }
}

// void findpow(arr A, int dim, int pow)
// {

//     REP(i, dim)
//     REP(j, dim)
//     {
//         I[i][j] = (i == j) ? 1 : 0;
//     }

//     REP(i, pow)
//     {
//         multiply(I, A, dim);
//     }
// }

void printmatrix(arr I, int dim)
{
    REP(i, dim)
    {
        REP(j, dim)
        {
            cout << I[i][j] << " ";
        }
        cout << endl;
    }
}

void lognfindpow(arr A, int dim, int pow)
{
    REP(i, dim)
    REP(j, dim)
    {
        I2[i][j] = (i == j) ? 1 : 0;
    }

    while (pow)
    {
        if (pow % 2)
        {
            multiply(I2, A, dim);
            pow--;
        }
        else
        {
            multiply(A, A, dim);
            pow /= 2;
        }
    }
    REP(i, dim)
    REP(j, dim)
    A[i][j] = I2[i][j];
}
int main()
{
    int dim, pow;
    cin >> pow;
    cin >> dim;
    arr A;
    REP(i, dim)
    REP(j, dim)
    cin >> A[i][j];

    // O(N^3 * N)
    // findpow(A, dim, pow);

    // O(N^3 * log(N))
    lognfindpow(A, dim, pow);

    printmatrix(A, dim);

    return 0;
}