#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, count = 0, check = 0;
    string s1, s2, ans;

    cin >> m >> n;
    cin.ignore();

    getline(cin, s1);

    while (count < n - 1) {
        getline(cin, s2);
        check = 0;

        for (int i = 0; i < m; i++) {
            if (s1[i] != s2[i]) {
                check++;
            }
        }

        if (check > 2) {
            break;
        }

        ans = s1;
        s1 = s2;
        count++;
    }

    cout << ans;
    return 0;
}
