#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        for(int i=0 ; i<p.size() ; i++){
            if(p[i] == '*') return true;
        }
        if(s.size() != p.size()) return false;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]!=p[i] || p[i]!= '?') return false;
        }
        return true;
    }
};
int main(){
    string a = "aa";
    string b = "*";
    Solution solution;
    bool result = solution.isMatch(a, b);
    cout << result;
}