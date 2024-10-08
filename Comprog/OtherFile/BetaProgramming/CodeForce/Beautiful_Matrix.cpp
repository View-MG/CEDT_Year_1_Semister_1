#include<bits/stdc++.h>
using namespace std;
int main(){
    int pos_i,pos_j;
    int arr[5][5] = {
        {4,3,2,3,4},
        {3,2,1,2,3},
        {2,1,0,1,2},
        {3,2,1,2,3},
        {4,3,2,3,4}
    };
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            int a;
            cin >> a;
            if(a==1){
                pos_i = i;
                pos_j = j;
            }
        }
    }
    cout << arr[pos_i][pos_j];
}