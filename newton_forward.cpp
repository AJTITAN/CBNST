#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double arr[n][n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
    }
    for(int i=0;i<n;i++){
        cin>>arr[i][1];
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            arr[j][i] = arr[j+1][i-1] - arr[j][i-1];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    double r;
    cin>>r;
    double p = (r-arr[0][0])/(arr[1][0]-arr[0][0]);
    double x = p;
    cout<<p<<endl;
    double ans = arr[0][1];
    int f = 1;
    for(int i=2;i<n+1;i++){
        ans+= (x*arr[0][i])/f;
        f*=i;
        x*=(x-i+1);
    }
    cout<<ans;
    return 0;
}

// 100 150 200 250 300 350 400

// 10.63 13.03 15.04 16.81 18.42 19.90 21.27