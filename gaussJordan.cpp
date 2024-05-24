#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    cout << "Enter number Equations: ";
    cin >> n;
    double a[n][n + 1], x[n];

    // array of double type with size (n x n+1)
    for (i = 0; i < n; i++)
    {
        cout << "Enter Equation No. " << i + 1 << ": ";
        for (j = 0; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                double t = a[j][i] / a[i][i];
                for (k = 0; k < n + 1; k++)
                {
                    a[j][k] = a[j][k] - t * a[i][k];
                }
            }
        }
    }

    // x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];

    // for (i = n - 2; i >= 0; i--)
    // {
    //     double sum = 0;
    //     for (j = i + 1; j < n; j++)
    //     {
    //         sum += a[i][j] * x[j];
    //     }

    //     x[i] = (a[i][n] - sum) / a[i][i];
    // }

    cout << "Values of unknowns are:\n";
    for (i = 0; i < n; i++)
    {
        x[i] = a[i][n] / a[i][i];
        cout << "x[" << i + 1 << "]=" << x[i] << endl;
    }
    return 0;
}