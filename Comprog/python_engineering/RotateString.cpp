#include<bits/stdc++.h>
using namespace std;
int main(){
    string key,tmp;
    int n;
    vector<string> data,ans,tmp_ans;
    cin >> key >> n >> tmp;
    data.push_back(tmp);
    for(int i=1 ; i<n ; i++){
        cin >> tmp;
        if(data[0].size() != tmp.size()){
            cout << "Invalid size";
            return 0;
        }
        data.push_back(tmp);
    }
    if(key == "90"){
        for(int i=0 ; i<data[0].size() ; i++){
        string tmp2 = "";
            for(int j=n-1 ; j>=0 ; j--){
                tmp2 += data[j][i];
            }
            ans.push_back(tmp2);
        }
        for(auto i : ans){
            cout << i << endl;
        }
        return 0;
    }
    else if(key == "180" || key == "flip"){
        for(int i=0 ; i<n ; i++){
            int tmp3=data[i].size();
            if(tmp3%2==1) tmp3+=1;
            for(int j=0 ; j<(tmp3/2) ; j++){
                swap(data[i][j],data[i][data[i].size()-j-1]);
            }
        }
    }
    if(key == "flip"){
        for(auto i : data){
            cout << i << endl;
        }
        return 0;
    }
    else if(key == "180"){
        for(int i=n-1 ; i>=0 ; i--){
            cout << data[i] << endl;
        }
    }
}