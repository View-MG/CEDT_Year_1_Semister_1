#include<bits/stdc++.h>
using namespace std;
int findNum(int a,int b,int c){
    return (c-a) + (b-c);
}
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int a,b,mins=99999;
        cin >> a >> b;
        for(int j=a ; j<=b ; j++){
            if(findNum(a,b,j) >= 0) mins = min(mins,findNum(a,b,j));
        }
        cout << mins << endl;
    }
}