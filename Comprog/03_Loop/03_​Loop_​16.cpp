#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j< n+i ; j++){
            if(i+j == n-1) cout << "*";
            else if(i == n-1) cout << "*";
            else if(abs(i-j) == n-1) cout << "*";
            else cout << ".";
        }
        cout << endl;
    }
}