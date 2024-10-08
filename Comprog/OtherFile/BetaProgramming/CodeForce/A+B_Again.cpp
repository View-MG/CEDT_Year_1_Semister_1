#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        string s;
        long long int num=0;
        cin >> s;
        for(auto j : s){
            num += j - '0';
        }
        cout << num << endl;
    }
}