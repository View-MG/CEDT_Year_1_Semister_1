#include <bits/stdc++.h>
using namespace std;

void generatePermutations(int n, vector<int> &sol, vector<bool> &used, vector<vector<int>> &dependencies, vector<int> &inDegree) {
    if (sol.size() == n) {
        for (int x : sol) cout << x << " ";
        cout << "\n";
        return;
    }

    for(int i{0} ; i<n ; i++) {
        if (!used[i] && inDegree[i] == 0) {
            used[i] = true;
            sol.push_back(i);
            for (int dependent : dependencies[i]) {
                inDegree[dependent]--;
            }
            
            generatePermutations(n, sol, used, dependencies, inDegree);
            
            for (int dependent : dependencies[i]) {
                inDegree[dependent]++;
            }
            sol.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> dependencies(n);
    vector<int> inDegree(n, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        dependencies[a].push_back(b);
        inDegree[b]++;
    }

    vector<int> sol;
    vector<bool> used(n, false);
    
    generatePermutations(n, sol, used, dependencies, inDegree);
}
