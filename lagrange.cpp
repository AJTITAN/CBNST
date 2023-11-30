#include<bits/stdc++.h>
using namespace std;
struct Data
{
    int x, y;
};

void inputData(Data f[], int n)
{
    cout << "Enter the data points (x, y):\n";
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "]: ";
        cin >> f[i].x;

        cout << "y[" << i << "]: ";
        cin >> f[i].y;
    }
}
double interpolate(Data f[], int xi, int n)
{
    double result = 0;

    for (int i=0; i<n; i++)
    {
        double term = f[i].y;
        for (int j=0;j<n;j++)
        {
            if (j!=i)
                term = term*(xi - f[j].x)/double(f[i].x - f[j].x);
        }

        result += term;
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    Data f[n];
    inputData(f, n);

    int xi;
    cout << "Enter the value of x for interpolation: ";
    cin >> xi;

    cout << "Value of f(" << xi << ") is : " << interpolate(f, xi, n);

    return 0;
}
