#include<bits/stdc++.h>
using namespace std;
int recur(int a, int b, int c , int count){
    if(a==0 && b==0 && c==0) return count;
    else recur(a)
}
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int a,b;
        cin >> a >> b;
        recur(a,b-a,b,0);
    }
}