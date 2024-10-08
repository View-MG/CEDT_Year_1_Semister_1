#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,ans="";
    cin >> s1 >> s2;
    for(int i=0 ; i<s1.size() ; i++){
        if(s1[i] == '1' && s2[i] == '1'){
            ans += "0";
        }
        else if(s1[i] == '1' || s2[i] == '1') ans += "1";
        else ans += "0";
    }
    cout << ans;
}