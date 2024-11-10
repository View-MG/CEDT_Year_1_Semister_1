#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    for(auto &i : n){
            i = i=='(' ? i = '[' : i; 
            i = i=='[' ? i = '(' : i; 
            i = i==')' ? i = ']' : i; 
            i = i==']' ? i = ')' : i; 
    }
    cout << n;
}