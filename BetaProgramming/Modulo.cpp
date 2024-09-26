#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> mod(10,999);
    int x=0,ans=0;

    cin >> x;
    *mod.begin() = x%42 ;

    for(int i=1 ; i<=9 ; i++){
        cin >> x;
        bool check = true;
        for(int j=0 ; j<i ; j++){
            if(x%42 == mod[j]) {
                check=false;
                break;
            }
        }
        if(check) mod[i] = x%42;
    }
    for(int i=0 ; i<10 ; i++){
        cout << mod[i] << " " ;
    }
}