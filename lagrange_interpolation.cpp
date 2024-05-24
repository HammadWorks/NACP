#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    double X, x[10], y[10], sum, term;
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
        cin >> y[i];
    }

    cout << "Enter value x for which you want to find y :\n";
    cin >> X;

    sum = 0;

    for (i = 0; i < n; i++)
    {
        term = 1;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                term *= (X - x[j]) / (x[i] - x[j]);
            }
        }

        sum += term * y[i];
    }

    cout << "\nThe value of Y is : " << sum << endl;

    return 0;
}