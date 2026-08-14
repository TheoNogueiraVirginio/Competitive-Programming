#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> angles;

    int n; cin >> n;
    
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        angles.push_back(a);
    }

    for (int mask=0; mask<(1<<n); mask++) {
        int sum = 0;

        for (int i=0; i<n; i++) {
            if (mask & (1U << i)) {
                sum += angles[i];
            } else {
                sum -= angles[i];
            }
        }

        if (sum % 360 == 0) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    fast;
    solve();

    return 0;
}