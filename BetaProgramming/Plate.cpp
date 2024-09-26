#include <bits/stdc++.h>
using namespace std;
struct Plate
{
    int room;
    string name;
};

int main() {
    int n,m;
    cin >> n >> m;
    vector<Plate> student,line;
    for(int i=0 ; i<m ; i++){
        int a;
        string b;
        Plate newPlate = {a,b};
        student.push_back(newPlate);
    }
    char command;
    cin >> command;
    while(command != 'X'){
        if(command == 'E'){
            string tmp;
            cin >> tmp;
            for(int i=0 ; i<m ; i++){
                if(student[i].name == tmp){
                    line.push_back({student[i].room,student[i].name});
                }
            }
        }
    }
    
}
