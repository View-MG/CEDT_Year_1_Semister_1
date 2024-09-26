#include<bits/stdc++.h>
using namespace std;
string month[] = {"Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
struct ZodiacSign {
    int startDay;
    int startMonth;
    int endDay;
    int endMonth;
    string name;
};
void read_data(vector<string> &vec1){
    if(!(vec1[1].empty())){
        auto it = find(month,month+12,vec1[1]);
        vec1[1] = to_string(it-month+1);
    }
}
string zodiac(int d,int m){
    vector<ZodiacSign> zodiacSigns = {{22, 3, 21, 4, "Aries"},{22, 4, 21, 5, "Taurus"},{22, 5, 21, 6, "Gemini"},{22, 6, 21, 7, "Cancer"},{22, 7, 21, 8, "Leo"},{22, 8, 21, 9, "Virgo"},{22, 9, 21, 10, "Libra"},{22, 10, 21, 11, "Scorpio"},{22, 11, 21, 12, "Sagittarius"},{22, 12, 20, 1, "Capricorn"},{21, 1, 20, 2, "Aquarius"},{21, 2, 21, 3, "Pisces"}};
    for (const auto& sign : zodiacSigns) {
        if ((m == sign.startMonth && d >= sign.startDay) ||
            (m == sign.endMonth && d <= sign.endDay)) {
            return sign.name;
        }
    }
    return 0;
}
bool day_in_feb(int y){
    if(y%4==0 && y%100!=0 || y%400==0) return true;
    else return false;
}
int main(){
    string n;
    cin >> n;
    if(n == "read_data()"){
        vector<string> vect1(3);
        cin >> vect1[0] >> vect1[1] >> vect1[2];
        read_data(vect1);
        for(const auto& i : vect1) cout << i << " ";
    }
    else if(n == "zodiac"){
        int n1,n2;
        cin >> n1 >> n2;
        cout << zodiac(n1,n2);
    }
    else if(n == "day_in_feb"){
        int n1;
        cin >> n1;
        int day = (day_in_feb(n1)) ? 29 : 28;
        cout << day;
    }
}