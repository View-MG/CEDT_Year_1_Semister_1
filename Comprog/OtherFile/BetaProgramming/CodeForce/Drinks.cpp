#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double total=0;
    for(int i=0 ; i<n ; i++){
        int a;
        cin >> a;
        total += a;
    }
    cout << fixed << setprecision(12) << total/n;
}