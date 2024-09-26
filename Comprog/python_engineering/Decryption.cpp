#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string a1 = "";
    string a2 = "";
    for(int i=4 ; i<s.size() ; i+=7){
        a1 += s[i];
    }
    for(int i=8 ; i<s.size() ; i+=5){
        a2 += s[i];
    }
    int num1 = stoi(a1);
    int num2 = stoi(a2);
    string tmp = to_string(num1+num2);
    int num3 = stoi(substr())
}