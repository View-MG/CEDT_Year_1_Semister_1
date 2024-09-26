#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    map<char,int> ball = {{'X',0},{'R',1},{'Y',2},{'G',3},{'W',4},{'B',5},{'P',6},{'K',7}};
    map<int,int> player;
    player[1] = 0;
    player[2] = 0;
    while(true){
        getline(cin,line);
        if(line[1] == 'K'){
            player[line[0]-'0'] += (ball[line[1]]);
            break;
        }
        if(line[1] == 'R'){
            player[line[0]-'0'] += (1+ball[line[2]]);
        }else player[line[0]-'0'] += (ball[line[1]]);
    }
    cout << player[1] << " " << player[2] << endl;
    if(player[1] > player[2]) cout << "Player 1 wins";
    else if(player[1] < player[2]) cout << "Player 2 wins";
    else cout << "Tie";
}