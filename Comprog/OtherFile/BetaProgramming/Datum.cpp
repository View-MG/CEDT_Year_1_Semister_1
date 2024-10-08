#include <bits/stdc++.h>
using namespace std;

int main() {
    const string day[7] = {"Wednesday" , "Thursday", "Friday", "Saturday","Sunday","Monday", "Tuesday"};
    const int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int d,m;
    cin >> d >> m;
    int d_total=d;
    for(int i=0 ; i<m-1 ; i++) d_total += month[i];
    cout << day[d_total%7];
}
