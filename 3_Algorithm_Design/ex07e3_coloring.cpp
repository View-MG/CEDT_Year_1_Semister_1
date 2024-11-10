#include<bits/stdc++.h>
using namespace std;
bool sortByVertex(pair<int,vector<int>> &a, pair<int,vector<int>> &b){
    return a.second.size() > b.second.size();
}
int main(){
    int n,m; cin >> n >> m;
    unordered_map<int,vector<int>> vertex;
    unordered_map<int,int> color;
    vector<int> already;
    for(int i{0} ; i<m ; i++){
        int a,b; cin >> a >> b;
        vertex[a].push_back(b);
        vertex[b].push_back(a);
    }
    vector<pair<int, vector<int>>> sortedVertices;
    for (auto &x : vertex) {
        sortedVertices.push_back(x);
    }
    sort(sortedVertices.begin(), sortedVertices.end(), sortByVertex);
    int minColor=0;
    
}