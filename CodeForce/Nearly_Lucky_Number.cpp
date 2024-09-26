#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool check=true;
    if(s.size()%4 == 0 || s.size()%7 == 0){
        for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '4' || s[i] == '7'){
            continue;
        }else{
            check = false;
            break;
        }
        }
    }
    else{
        check=false;
    }
    if(check==true) cout << "YES";
    else cout << "NO";
}