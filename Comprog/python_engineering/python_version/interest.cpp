#include<bits/stdc++.h>
using namespace std;
int main(){
    int d, m, y, all, start;
    double total;
    cin >> d >> m >> y >> total >> all >> start;
    start--;
    for(int i = 1; i <= all; i++){
        int month=((i+start) % 12);
        if(month == 0) month=12;
        if(month == m){
            if(i%4 == 0) total += total * 5.0 / 100 * 1.0 / 12;
            else if(i % 4 == 1) total += total * 2.0 / 100 * 1.0 / 12;
            else if(i % 4 == 2) total += total * 3.0 / 100 * 1.0 / 12;
            else if(i % 4 == 3) total += total * 4.0 / 100 * 1.0 / 12;
        }
        else{
            if(i % 4 == 0) total += total * 4.0 / 100 * 1.0 / 12;
            else if(i % 4 == 1) total += total * 1.0 / 100 * 1.0 / 12;
            else if(i % 4 == 2) total += total * 2.0 / 100 * 1.0 / 12;
            else if(i % 4 == 3) total += total * 3.0 / 100 * 1.0 / 12;
        }
    }
    cout << fixed << setprecision(2) << total;
}
