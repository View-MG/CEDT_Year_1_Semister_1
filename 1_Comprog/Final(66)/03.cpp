#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string,set<string>> department;
    map<string,string> employee;
    int n,m; cin >> n >> m;
    for(int i{0} ; i<n ; i++){
        string dep,name;
        cin >> name >> dep;
        department[dep].insert(name);
        employee[name] = dep;
    }
    for(int i{0} ; i<m ; i++){
        int a;
        cin >> a;
        if(a == 1){
            string ndep,name;
            cin >> name >> ndep;
            department[employee[name]].erase(name);
            department[ndep].insert(name);
            employee[name] = ndep;
        }
        else if(a == 2){

        }
    }
    for(auto &x : department){
        cout << x.first << " ";
        for(auto &a : x.second){
            cout << a << " ";
        }
        cout << endl;
    }
}