#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    int rx1,rx2,rx3,ry1,ry2,ry3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    int sumx = (x1+x2+x3);
    rx3 = sumx-(2*x1);
    rx2 = (2*x2)-rx3;
    rx1 = (2*x3)-rx3;
    int sumy = (y1+y2+y3);
    ry3 = sumy-(2*y1);
    ry2 = (2*y2)-ry3;
    ry1 = (2*y3)-ry3;

    cout << rx1 << " " << ry1 << endl;
    cout << rx2 << " " << ry2 << endl;
    cout << rx3 << " " << ry3 << endl;
}