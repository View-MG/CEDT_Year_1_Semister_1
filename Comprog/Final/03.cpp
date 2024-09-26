#include<bits/stdc++.h>
using namespace std;
struct name{
    string company;
    vector<string> employee;
};
bool checkPlace(const string& name,const vector<string>& company){
    for(const auto& value : company){
        if(value == name) return false;
    }
    return true;
}
int main() {
    int n,m,count=0,num_com=0;
    cin >> n >> m;
    name e[n];
    while(count!=n){
        string a,b;
        cin >> a >> b;
        bool check=true;
        for(int i=0; i<count ; i++){
            if(b == e[i].company) {
                e[i].employee.push_back(a);
                check = false;
                break;
            }
        }
        if(check){
            e[count].company = b;
            e[count].employee.push_back(a);
            num_com++;
        }
        count++;
    }
    for(int i=0 ; i<m ; i++){\
        int x;
        cin >> x;
        if(x == 1){
            string a,b;
            cin >> a >> b;
            for(int j=0 ; j<num_com ; j++){
                for(int k=0 ; k<e[j].employee.size() ; k++){
                    if(a == e[j].employee[k]){
                        e[j].employee[k].p
                        break;
                    }
                }
            }
        }
        else if(x==2){
            
        }
    }
    
    for(int i=0 ; i < num_com ; i++){
        cout << e[i].company;
        for(auto &j : e[i].employee){
            cout << " " << j;
        }
        cout << endl;
    }
}