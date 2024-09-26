#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << "Before Rotate -------------------" << endl;
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << "(" << i << "," << j << ")";
        }
        cout << endl;
    }
    cout << "Aftor Rotate -------------------" << endl;
    for(int i=n-1 ; i>=0 ; i--){
        for(int j=0 ; j<n ; j++){
            cout << "(" << i << "," << j << ")";
        }
        cout << endl;
    }
}