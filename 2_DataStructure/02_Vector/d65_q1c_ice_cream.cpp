#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    int n,m,start; cin >> n >> m >> start;
    vector<pair<int,int>> collect,icecream;
    vector<int> money(200000);
    money[0] = start;
    for(int i{0} ; i<n ; i++){
        pair<int,int> q;
        cin >> q.first >> q.second;
        collect.push_back(q);
    }
    sort(collect.begin(),collect.end());
    int idx=0,mo=start;
    for(int i{1} ; i<200000 ; i++){
        if(idx < n && collect[idx].first == i){
            mo = collect[idx].second ;
            idx++;
        }
        money[i] = money[i-1] + mo;
    }
    for(int i{0} ; i<m ; i++){
        int prize,lose;
        cin >> prize >> lose;
        auto it = lower_bound(money.begin(),money.end(),prize);
        auto it2 = lower_bound(money.begin(),money.end(),prize+money[lose]);
        if(it-money.begin() <= lose) cout << it-money.begin();
        else cout << it2-money.begin();
        cout << " ";
    }


}