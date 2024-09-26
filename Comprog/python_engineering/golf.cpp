#include<bits/stdc++.h>
using namespace std;
int main(){
    int par,stroke,select;
    int sumpar=0,sumstroke=0,point=0,handicap;
    for(int i=0 ; i<9 ; i++){
        cin >> par >> stroke >> select;
        sumpar += par;
        sumstroke += stroke;
        if(select == 1){
            point += (min(par+2,stroke));
        }
    }
    handicap = i(0.8*(1.5*point-sumpar));
    cout << sumstroke << endl;
    cout << handicap << endl;
    cout << sumstroke-handicap << endl;
}