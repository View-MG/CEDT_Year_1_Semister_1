#include<bits/stdc++.h>
using namespace std;
struct Delivery{
    string name;
    char type;
    int day,month,year;
    bool status;
};
int checkLeap(int y,int m){
    if(m==2 && y%4==0 && y%100!=0 || y%400==0) return 1;
    else return 0;
}
bool howtoSort(const Delivery &a,const Delivery &b){
    if (a.status != b.status) return a.status < b.status;
    if (a.year != b.year) return a.year < b.year;
    if (a.month != b.month) return a.month < b.month;
    return a.day < b.day;
}
int main(){
    string n;
    int count=0;
    cin >> n;
    vector<Delivery> delivery;
    map<int,int> month = {{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
    while(n!="END"){
        char type;
        int d,m,y;
        bool a=true;
        cin >> type >> d >> m >> y;
        if(!(type == 'E' || type == 'Q' || type == 'N' || type == 'F')) {
            a = false;
        }
        if(!((m>=1 && m<=12) && (d>0 && d<=month[m+checkLeap(y-543,m)]))) {
            a = false;
        }
        Delivery tmp = {n,type,d,m,y,a};
        delivery.push_back(tmp);
        cin >> n;
    }
    for(auto i : delivery){
        if(i.status == 0) cout << "Error: " << i.name << " " << i.type << " " << i.day << " " << i.month << " " << i.year << endl;
    }
    sort(delivery.begin(),delivery.end(),howtoSort);
    for(auto i : delivery){
        if(i.status == 1) cout << i.name << " " << i.type << " " << i.day << "/" << i.month << "/" << i.year << endl;
    }
}