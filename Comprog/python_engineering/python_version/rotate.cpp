#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n][n];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << "( " << i << " , " << j << " )";
        }
        cout << endl;
    }
    string s;
    cin >> s;
    if(s == "90"){
        for(int i=n-1 ; i>=0 ; i--){
        for(int j=0 ; j<n ; j++){
            cout << arr[j][i];
        }
        cout << endl;
        }
    }
    if(s == "180"){
        for(int i=n-1 ; i>=0 ; i--){
        for(int j=n-1 ; j>=0 ; j--){
            cout << arr[i][j];
        }
        cout << endl;
        }
    }
}
// 00 01 02 || 02 12 22
// 10 11 12 || 01 11 21
// 20 21 22 || 00 10 20