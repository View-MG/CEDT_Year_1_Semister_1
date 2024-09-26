#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int a1,a2,b1,b2,win=0;
        cin >> a1 >> a2 >> b1 >> b2;
        if((a1>b1 || a1==b1) && (a2>b2 || a2==b2) && !(a1==b1 && a2==b2)) win++;
        if((a1>b2 || a1==b2) && (a2>b1 || a2==b1) && !(a1==b2 && a2==b1)) win++;
        if((a2>b1 || a2==b1) && (a1>b2 || a1==b2) && !(a2==b1 && a1==b2)) win++;
        if((a2>b2 || a2==b2) && (a1>b1 || a1==b1) && !(a2==b2 && a1==b1)) win++;
        cout << win << endl;
    }
}