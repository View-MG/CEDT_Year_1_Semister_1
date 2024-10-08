#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //จน.คี่
    if(n%2 == 1) {
        //upper
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                if(abs(j-n/2)+abs(i-n/2)==n/2) cout << "*";
                else cout << "-";
            } cout << endl;
        }
    }
    else if(n%2 == 0) {
        //upper
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
				if(i+j==(n-1)/2 || i-j==(n-1)/2 || j-i==n/2  || (i>(n-1)/2 && j>=n/2 && abs(j-(n+1)/2)+abs(i-(n-1)/2)==(n-2)/2)) cout << "*";
                else cout << "-";
            } cout << endl;
        }
    }
}