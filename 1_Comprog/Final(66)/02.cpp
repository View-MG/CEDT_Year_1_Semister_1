#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int,set<string>,greater<int>> student;
    map<string,int> check;
    for(int i{0} ; i<n ; i++){
        string s; int a;
        cin >> s >> a;
        if(check.find(s) == check.end()){
            student[a].insert(s);
            check[s] = a;
        }
        else if(check.find(s) != check.end() && check[s] < a){
            student[check[s]].erase(s);
            if(student[check[s]].empty()) student.erase(check[s]);
            student[a].insert(s);
            check[s]=a;
        }
    }
    int m; cin >> m;
    m = student.size() < m ? student.size() : m;
    auto it = student.begin();
    for(int i{0}; i<m ; i++ , it++){
        cout << it->first << " ";
        for(auto &a : it->second){
            cout << a << " ";
        }
        cout << endl;
    }
    
}