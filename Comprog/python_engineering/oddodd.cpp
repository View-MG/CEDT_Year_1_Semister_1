#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    map<char,int> value{{'A',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9},{'T',10},{'J',11},{'Q',12},{'K',13}};
    map<char,int> card{{'C',1},{'D',2},{'H',3},{'S',4}};
    vector<int> ans;
    getline(cin,line);
    ans.push_back(value[line[0]]*card[line[1]]);
    for(int i=2 ; i<line.size() ; i+=2){
        int n;
        if(line[i] != line[i-2]) n = (value[line[i-2]]-value[line[i]]);
        else if(line[i] == line[i-2]) n = (card[line[i-1]]-card[line[i+1]]);
        if(n>0) cout << "+";
        cout << n;
    }
}