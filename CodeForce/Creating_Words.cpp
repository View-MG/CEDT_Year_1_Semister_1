#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int a,b,line,maxs=0;;
        cin >> a >> b;
        vector<vector<char>> manhattan(a,vector<char>(b));
        for(int j=0 ; j<a ; j++){
            int count = 0;
            for(int k=0 ; k<b ; k++){
                char tmp;
                cin >> tmp;
                if(tmp == '#') count++;
                manhattan[j][k] = tmp;
            }
            if(count > maxs){
                maxs=count;
                line = j;
            }
        }
        bool first=false;
        int f1,c1=0;
        for(int j=0 ; j<manhattan[line].size() ; j++){
            if(first==0 && manhattan[line][j] == '#') {
                f1 = j;
                first = true;
            }
            if(manhattan[line][j] == '#') c1++;
        }
        cout << line+1 << " " << int(c1/2)+f1+1 << endl;
    }
}