#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans=0;
    cin >> n;
    int arr[n][n];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if((arr[i][j]==arr[i][j+1]) && (arr[i][j]==arr[i+1][j]) 
            && (arr[i][j]==arr[i+1][j]) && (arr[i][j]!=arr[i+1][j+1])
            ){
                ans++;
            }
        }
    }
    cout << ans;
}
