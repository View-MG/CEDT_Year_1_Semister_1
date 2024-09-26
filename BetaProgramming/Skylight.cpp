#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m ;

    int l,k,c;
    cin >> l >> k;
    cin >> c;

    int cost,sum_l=0,total;
    for(int i=0 ; i<n*m ; i++){
        cin >> cost;
        sum_l += cost;
    }

    total = l*k*c + sum_l;

    if(total%c == 0) cout << total/c;
    else cout << total/c +1;
}