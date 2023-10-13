#include<bits/stdc++.h>
using namespace std;
int main()
{
    double true_value,approx_value;
    cin>>true_value>>approx_value;
    cout<< "absolute error = "<< true_value-approx_value<<endl;
    cout<< "relative error = "<< (true_value-approx_value)/true_value<<endl;
    cout<< "percentage error = "<< ((true_value-approx_value)/true_value)*100;
    return 0;
}