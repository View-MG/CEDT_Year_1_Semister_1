#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    char brick[n][m];
    vector<int> row(m,n-1);
    int insert[m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> brick[i][j];

            if (brick[i][j] == 'O' && row[j] == n-1) {
                row[j] = i - 1;
            }
        }
    }

    for(int i=0 ; i<m ; i++){
        cin >> insert[i];
    }
    for(int i=0 ; i<m ; i++) { //แถว
        int del=insert[i]; //จำนวนที่จะใส่
        int now=row[i]; //แถวที่อยู่ตอนนั้น
        while(del>0 && now>=0){
            brick[now][i] = '#';
            del--;
            now--;
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout << brick[i][j];
        }
        cout << endl;
    }

    
}