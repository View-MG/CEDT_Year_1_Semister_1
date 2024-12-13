#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;
    int A[n];
    while(n--) cin >> A[n];
    while(k--){
        ll inp,ans,l=0,r=1e12; 
        cin >> inp;
        while(l<=r){
            ll cur = 0, m = (r+l)/2;
            for(ll e:A)  cur += 1+m/e;
            if(cur>=inp) ans = m, r = m-1;
            else l = m+1;
        }
        cout << ans << endl;
    }
}

