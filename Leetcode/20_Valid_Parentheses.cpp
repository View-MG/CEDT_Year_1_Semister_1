#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1) return false;
        stack<char> q;
        for(auto i : s){
            if( i=='(' || i=='{' || i=='[') q.push(i);
            else if( i==')'){
                if(q.top() == '(') q.pop();
                else return false;
            }
            else if( i=='}'){
                if(q.top() == '{') q.pop();
                else return false;
            }
            else if( i==']'){
                if(q.top() == '[') q.pop();
                else return false;
            }
        }
        return q.empty();
    }
};
int main(){
    string a;
    cin >> a;
    Solution solution;
    cout << solution.isValid(a);
}