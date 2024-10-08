#include<bits/stdc++.h>
using namespace std;
void setValue(vector<int>& vect, int n){
    for(int i=0 ; i<n ; i++){
        vect.push_back(1);
    }
}
int main(){
    int n; 
    cin >> n; //Task
    for(int i=0 ; i<n ; i++){
        int m,t,d; 
        cin >> m >> t >> d; // m : Day , t = time to shower , d = time per day
        set<pair<int,int>> day;
        for(int j=0 ; j<m ; j++){
            int a,b;
            cin >> a >> b;
            day.insert({a,b});
        }
        int start=0;
        bool found=false;
        for(const auto& i : day){
            if((i.first - start) >= t){
                found = true;
                break;
            }
            start = i.second;
        }
        if(!found && d-start >=t){
            found=true;
        }
        if(found) cout << "YES" << endl;
        else if(!found) cout << "NO" << endl;
    }
}