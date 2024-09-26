#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    vector<int> factora;
    vector<int> factorc;
    cin >> a >> b >> c;
    int r = b*b-4*a*c;
    if(r < 0) cout << "No Solution";
    else {
        for(int i=-100 ; i<=100 ; i++){
            if(a%i==0) factora.push_back(i);
            if(c%i==0) factorc.push_back(i);
    }
    }
    for(auto i : factora) cout << i;
    for(auto i : factorc) cout << i;
}
