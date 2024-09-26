#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin >> y;
    y++;
    string s = to_string(y);
    while(!(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])){
        y++;
        s = to_string(y);
    }
    cout << s;
}