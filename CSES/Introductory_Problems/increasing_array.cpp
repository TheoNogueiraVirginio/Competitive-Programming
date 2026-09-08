#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n; cin >> n;

    long long moves = 0;
    long long max_value = 0;

    for (int i=0; i<n; i++) {
        long long x; cin >> x;
        max_value = max(max_value, x);
        moves += max_value - x;
    }

    cout << moves << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}