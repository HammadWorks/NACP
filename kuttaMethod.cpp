#include <iostream>
using namespace std;

double func(double x, double y)
{
    return x + y;
}

int main()
{
    int i, n;
    double h, x0, y0, Yn, Xn, k1, k2, k3, k4, k;

    cout << "Enter Initial Condition" << endl;
    cout << "Xo = ";
    cin >> x0;
    cout << "Yo = ";
    cin >> y0;

    cout << "Enter Calculation point";
    cin >> Xn;

    cout << "Enter Number of steps";
    cin >> n;

    h = (Xn - x0) / (double)n;

    for (i = 0; i < n; i++)
    {
        k1 = h * func(x0, y0);
        k2 = h * func(x0 + h / 2.0, y0 + k1 / 2.0);
        k3 = h * func(x0 + h / 2.0, y0 + k2 / 2.0);
        k4 = h * func(x0 + h, y0 + k3);
        k = 1 / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);
        Yn = k + y0;
        cout << "Xo = " << x0 << " Y0 = " << y0 << endl;
        x0 += h;
        y0 = Yn;
    }

    cout << "The value of Y at X = " << Xn << " is " << Yn << endl;
    return 0;
}