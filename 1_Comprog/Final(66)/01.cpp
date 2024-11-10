#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,p;
    cin >> n;
    vector<vector<int>> m(n);
    vector<int> ans(n, 0);
    int tmp=0;
    for(int i=0;i<n;i++){
        cin >> p;
        m[i].resize(p);
        for(int j=0;j<p;j++){
            cin >> m[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j = 0 ; j<m[i].size();j++){
            tmp = 0;
            for(int k=0 ; k<m[i].size() ; k++){
                if(j != k) {
                   tmp += m[i][k];
                }
            }
            ans[i] = max(tmp,ans[i]);
        }
    }
    for(auto i : ans)
    cout << i << endl;

}