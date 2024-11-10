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
            cal.clear();
            sort(m.begin(),m.end(),sortMonopoly);
            ll tmp = m[m.size()-1].first;
            ll tmp2 = m[m.size()-1].second;
            for(int i{0} ; i<m.size()-1 ; i++){
                if(m[i+1].first >= m[i].first+1 && m[i+1].first-1 <= m[i].second){
                    m[i+1].first = m[i].first;
                    m[i+1].second = max(m[i].second,m[i+1].second);
                }
                else cal.push_back(m[i]);
            }
            if(!(m[m.size()-1].first != tmp && m[m.size()-1].second != tmp2))cal.push_back(m[m.size()-1]);
            m.clear();
            m = cal;
            cout << cal.size() << "\n";
        }
    }
}