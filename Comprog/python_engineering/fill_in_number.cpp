#include<bits/stdc++.h>
using namespace std;
void pattern1(int row,int col){
    int n=0;
    for(int i=1 ; i<=row ; i++){
        for(int j=1 ; j<=col ; j++){
            cout << n+j << " ";
        }
        cout << endl;
        n = i*col;
    }
}
void pattern2(int row,int col){
    int n=0;
    for(int i=1 ; i<=row ; i++){
        for(int j=i ; j<=row*col ; j+=3){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    int c=1;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if((j-i)>=0){ cout << c << " "; c++;}
            else cout << "0 ";
        }
        cout << endl;
    }
}
void pattern4(int n){
    int c;
    for(int i=1 ; i<=n ; i++){
        int c=i;
        for(int j=1 ; j<=n ; j++){
            if((j-i)>=0){ cout << c << " "; c+=j+1;}
            else cout << "0 ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    if(n==1){
        int a,b;
        cin >> a >> b;
        pattern1(a,b);
    }
    else if(n==2){
        int a,b;
        cin >> a >> b;
        pattern2(a,b);
    }
    else if(n==3){
        int a;
        cin >> a;
        pattern3(a);
    }
    else if(n==4){
        int a;
        cin >> a;
        pattern4(a);
    }
}