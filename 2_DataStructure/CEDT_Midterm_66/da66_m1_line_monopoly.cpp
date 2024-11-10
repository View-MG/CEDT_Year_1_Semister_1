#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sortMonopoly(pair<ll,ll> &a, pair<ll,ll> &b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    vector<pair<ll,ll>> m,cal;
    int n; cin >> n;
    for(int j{0} ; j<n ; j++){
        int c; cin >> c;
        if(c == 1){
            ll f1,f2; cin >> f1 >> f2;
            m.push_back({f1,f2});
        }
        if(c == 2){
            sort(m.begin(),m.end(),sortMonopoly);
            ll a = m[0].first;
            ll b = m[0].second;
            for(int i{1} ; i<m.size() ; i++){
                if(i<m.size()-1 && m[i].first >= a-1 && m[i].first<=b+1){
                    a = min(a,m[i].first);
                    b = max(b,m[i].second);
                }else if(i == m.size()-1){
                    if(m[i].first >= a-1 && m[i].first<=b+1){
                        a = min(a,m[i].first);
                        b = max(b,m[i].second);
                        cal.push_back({a,b});
                    }
                    else{
                        cal.push_back({a,b});
                        cal.push_back(m[i]);
                    }
                }
                else{
                    cal.push_back({a,b});
                    a = m[i].first;
                    b = m[i].second;
                }
                
            }
            cout << cal.size() << "\n";
            m = cal;
            cal.clear();
        }
    }
}