#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    unordered_map<string,vector<string>> animal;
    while(getline(cin,s1)){
        istringstream iss(s1);
        string tmp;
        vector<string> name;
        while(iss >> tmp) name.push_back(tmp);
        animal[name[1]].push_back(name[0]);
    }
    for(auto i : animal){
        cout << i.first << ": ";
        for(auto j : i.second) cout << j << " ";
        cout << endl;
    }
}
