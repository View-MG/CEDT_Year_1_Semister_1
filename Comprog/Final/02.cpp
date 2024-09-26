#include<bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int score;
};

bool IfEqual(Student &a,Student &b){
    if(a.score == b.score) { return a.name < b.name; }
    return a.score > b.score;
}

int main() {
    int n,outp;
    cin >> n;
    vector<Student> student(n);
    for(int i=0;i<n;i++){
        cin >> student[i].name >> student[i].score;
    }
    sort(student.begin(),student.end(),IfEqual);
    cin >> outp;
    int count=0;
    while(count != outp){
        cout << student[count].score << " " << student[count].name;
        int a=count+1;
        while(student[count].score == student[a].score){
            cout << " " << student[a].name;
            a++;
        }
        cout << endl;
        count++;
    }
}