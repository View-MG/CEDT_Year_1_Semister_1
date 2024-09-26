#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> nugget;
    int n;
    cin >> n;
    for(int i=1; n > 6*i ;i++){
        for(int j=0; n> 9*j ;j++){
            for(int k=0; n> 20*k ; k++){
                nugget.insert(6*i+9*j+20*k);
            }
        }
    }
  for (auto it = nugget.begin(); it != nugget.end(); ++it) {
    cout << *it << " ";
}
}