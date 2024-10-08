#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double ans;
    cin >> n;

    int x[n],y[n];
    for(int i=0 ; i<n ; i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0 ; i<n-2 ; i++){
        for(int j=i+1 ; j<n-1 ; j++){
            for(int k=j+1 ; k<n ; k++){
                double a= abs((x[i]*y[j]) + (x[j]*y[k]) + (x[k]*y[i]) - (x[j]*y[i]) - (x[k]*y[j]) - (x[i]*y[k]))/2.0 ;
                if(a > ans) ans=a;
            }
        }
    }
    cout << fixed << setprecision(3) << ans;
}