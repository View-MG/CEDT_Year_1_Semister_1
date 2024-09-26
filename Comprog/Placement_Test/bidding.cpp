#include<bits/stdc++.h>
using namespace std;
map<string,vector<pair<string,int>>> bidding;
map<string,pair<string,int>> maxprize;
set<string> all_bidder;
map<string,vector<string>> ans;
int n;
void printItem(string name){
    n=0;
    for(auto &bids : maxprize){
        if(bids.second.first == name) {
            cout << bids.first;
            n+=bids.second.second;  
        }
    }
}
int main(){
    int n;
    cin >> n;
    string bidder,product;
    int prize;
    for(int i=0 ; i<n ; i++){
        char choose;
        cin >> choose;
        if(choose == 'B'){
            cin >> bidder >> product >> prize;
            bidding[product].push_back({bidder,prize});
        }
        else if(choose == 'W'){
            cin >> bidder >> product;
            auto& bids = bidding[product];
            auto it = find_if(bids.begin(), bids.end(), [&](const pair<string,int>& p) {
                return p.first == bidder;
            });
            if(it != bids.end()) it->second = 0;
        }
    }
    for(auto &bids : bidding){
        for(auto &v : bids.second){
            all_bidder.insert(v.first);
            if(maxprize[bids.first].second < v.second){
                maxprize[bids.first].second = v.second;
            }
        }
    }
    for(auto &bids : bidding){
        for(auto &v : bids.second){
            if(maxprize[bids.first].second == v.second){
                maxprize[bids.first].first = v.first;
                break;
            }
        }
    }
    vector<string> tmp;
    for(auto& c : all_bidder){
        tmp.clear();
        cout << c << ": $";
        n=0;
        for(auto &bids : maxprize){
            if(bids.second.first == c && bids.second.second !=0) {
                tmp.push_back(bids.first);
                n+=bids.second.second;
            }
        }
        if(n!=0){
            cout << n << " -> ";
            for(auto &i : tmp){
                cout << i << " ";
            }
        }else if(n==0) cout << "0";
        cout << endl;
    }
}
