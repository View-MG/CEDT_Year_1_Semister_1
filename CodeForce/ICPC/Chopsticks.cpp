#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    vector<long long int> num(n);
    
    for (long long int i = 0; i < n; i++) {
        cin >> num[i];
    }
    long long int max1 = LLONG_MIN, max2 = LLONG_MIN;

    for (long long int i = 0; i < n; i++) {
        if (num[i] > max1) {
            max2 = max1;
            max1 = num[i];
        } else if (num[i] > max2) {
            max2 = num[i];
        }
    }

    long long int maxs = max1 * max2;
    cout << maxs << endl;

    return 0;
}