#include<bits/stdc++.h>
using namespace std;
bool checkVirus(vector<int> &v, int n){
    if(n<4) return true;
    int c1{0},c2{0};
    vector<int> v1,v2;
    for(int i{0} ; i<n/2 ; i++){
        c1 += v[i];
        c2 += v[i+(n/2)];
        v1.push_back(v[i]);
        v2.push_back(v[i+(n/2)]);
    }
    if(abs(c1-c2) > 1) return false;
    return checkVirus(v1,n/2) && checkVirus(v2,n/2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    int l = 1 << k;
    for(int i{0} ; i<n ; i++){
        vector<int> virus(l);
        for(int j{0} ; j<l ; j++) cin >> virus[i];
        if(checkVirus(virus,l)) cout << "yes\n";
        else cout << "no\n";
    }
}