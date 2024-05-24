#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    float X, x[10], y[10][10], sum;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter Values of X : \n";
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    cout << "Enter Values of Y : \n";
    for (i = 0; i < n; i++)
    {
        cin >> y[i][0];
    }

    cout << "Enter value x for which you want to find y :\n";
    cin >> X;

    sum = 0;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            y[j][i] = (y[j + 1][i - 1] - y[j][i - 1]) / (x[j + i] - x[j]);
        }
    }

    // printf("The Difference Table is as follows:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
            cout << y[i][j] << "\t\t";
        // printf("\n");
        cout << endl;
    }

    float term = 1;

    for (i = 0; i < n; i++)
    {
        sum = sum + term * y[0][i];
        term *= (X - x[i]);
    }
    cout << "\nThe value of Y is : " << sum << endl;

    return 0;
}