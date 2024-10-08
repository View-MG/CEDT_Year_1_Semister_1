#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> word;
    int n;
    cin >> n;
    string joke;
    for(int i=0 ; i<n ; i++){
        getline(cin,joke);
        word.insert(joke);
    }
    for (set<string>::iterator it = word.begin(); it != word.end(); ++it) {
    cout << *it << endl;
    }
}