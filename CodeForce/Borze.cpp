#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin >> y;
    string s = to_string(y);
    while(count < s.size()){
        if(s[count] == '.'){
            cout << "0";
            count++;
        }
        else if(s[count] == '-' && s[count+1] == '.'){
            cout << "1";
            count+=2;
        }
        else if(s[count] == '-' && s[count+1] == '-'){
            cout << "2";
            count+=2;
        } 
    }
}