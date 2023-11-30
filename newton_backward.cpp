#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    double arr[n][n + 1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i][1];
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            arr[j][i] = arr[j + 1][i - 1] - arr[j][i - 1];
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    double y;
    cin >> y;

    double u = (y - arr[n - 1][0]) / (arr[1][0]-arr[0][0]);
    cout << u << endl;

    double ans = u;
    double x = arr[n - 1][1];
    int fact = 1;

    for (int i = 2; i <= n; i++) {
        x += (ans * arr[n - i][i]) / fact;
        fact *= i;
        ans *= (u + (i - 1));
    }

    cout << "Predicted value " << y << " is = " << x << endl;

    return 0;
}

// 100 150 200 250 300 350 400

// 10.63 13.03 15.04 16.81 18.42 19.90 21.27