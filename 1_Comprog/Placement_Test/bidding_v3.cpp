#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<string,vector<pair<string,int>>> bidding;
    unordered_set<string> bit,item;
    for(int i=0 ; i<n ; i++){
        char c; cin >> c;
        if(c == 'B'){
            string b,p;
            int m;
            cin >> b >> p >> m;
            item.insert(p);
            if(bit.find(b) == bit.end()){
                bit.insert(b);
                bidding[p].push_back({b,m});
            }else{
                auto it = find(bidding[p]
            }
        }
        else if(c == 'W'){

        }
    }
}