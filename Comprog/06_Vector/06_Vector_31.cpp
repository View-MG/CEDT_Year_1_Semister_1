#include<bits/stdc++.h>
using namespace std;
bool checkBingoRow(vector<vector<pair<int,bool>>> &vec, int posx){
    for(int i{0} ; i<5 ; i++) if(vec[posx][i].second == false) return false;
    return true;
}
bool checkBingoColumn(vector<vector<pair<int,bool>>> &vec, int posy){
    for(int i{0} ; i<5 ; i++) if(vec[i][posy].second == false) return false;
    return true;
}
bool checkBingo1(vector<vector<pair<int,bool>>> &vec){
    for(int i{0} ; i<5 ; i++) if(vec[i][i].second == false) return false;
    return true;
}
bool checkBingo2(vector<vector<pair<int,bool>>> &vec){
    for(int i{0} ; i<5 ; i++) if(vec[4-i][i].second == false) return false;
    return true;
}
int main(){
    vector<vector<pair<int,bool>>> board(5, vector<pair<int, bool>>(5));
    board[2][2] = {0,true};
    vector<char> head(5);
    char store;
    for(int i{0} ; i<5 ; i++) cin >> head[i];
    for(int i{0} ; i<5 ; i++){
        for(int j{0} ; j<5 ; j++){
            if(i == 2 && j == 2) cin >> store; //didn't use this variable
            else{
                cin >> board[i][j].first;
                board[i][j].second = false;
            }
        }
    }
    string bingo;
    int count;
    bool check = true;
    while(cin >> bingo){
        char c = bingo[0];
        int num = stoi(bingo.substr(1));
        auto it = find(head.begin(),head.end(),c);
        int posy = it - head.begin(),posx=0;
        for(int i{0} ; i<5 ; i++){
            if(board[i][posy].first == num){
                board[i][posy].second = true;
                posx=i;
                break;
            }
        }
        if(check && (checkBingo1(board) || checkBingo2(board) || checkBingoColumn(board,posy) || checkBingoRow(board,posx))){
            cout << count << endl;
            if(checkBingoRow(board,posx)){
                for(int i{0} ; i<5 ; i++){
                    if(i==0) cout << head[i] << board[posx][i].first;
                    else if(board[posx][i].first == 0) continue;
                    else cout << ", " << head[i] << board[posx][i].first;
                }
                cout << endl;
            }
            if(checkBingoColumn(board,posy)){
                for(int i{0} ; i<5 ; i++){
                    if(i==0) cout << head[posy] << board[i][posy].first;
                    else if(board[i][posy].first == 0) continue;
                    else cout << ", " << head[posy] << board[i][posy].first;
                }
                cout << endl;
            }
            if(checkBingo1(board)){
                for(int i{0} ; i<5 ; i++){
                    if(i==0) cout << head[i] << board[i][i].first;
                    else if(board[i][i].first == 0) continue;
                    else cout << ", " << head[i] << board[i][i].first;
                }
                cout << endl;
            }
            if(checkBingo2(board)){
                for(int i{0} ; i<5 ; i++){
                    if(i==0) cout << head[i] << board[4-i][i].first;
                    else if(board[4-i][i].first == 0) continue;
                    else cout << ", " << head[i] << board[4-i][i].first;
                }
                cout << endl;
            }
            check = false;
        }else count++;
    }
}