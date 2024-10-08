#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int upper=0,lower=0;
    for(int i=0 ; i<s.size() ; i++){
        if(isupper(s[i])) upper++;
        else if(islower(s[i])) lower++;
    }
    if(upper>lower){
        for(int i=0 ; i<s.size() ; i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
        }
    }
    else if(upper<=lower){
        for(int i=0 ; i<s.size() ; i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s;
}