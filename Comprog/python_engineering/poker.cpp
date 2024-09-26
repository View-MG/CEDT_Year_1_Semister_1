#include<bits/stdc++.h>
using namespace std;
int main(){
    string orig = "AKQJX98765432A";
    int n;
    cin >> n;
    bool straight = false , flush = true;
    for(int i=0 ; i<n ; i++){
        string s;
        getline(cin,s);
        string num[5];
        int count=0;
        for(int j=1 ; j<s.size() ; j+=3) num[count++];
        for(int j=2 ; j<s.size()-3 ; j+=3){
            if(s[j] != s[j+3]) flush=false;
        }
        for(int j=0 ; j<orig.size() ; j++){
            for(int k=0 ; k<num->size() ; k++){
                if()
            }
        }

    }
}