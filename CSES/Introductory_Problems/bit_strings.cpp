#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;

    long long ans = 1;
    for (int i=0; i<n; i++) {
        ans = (ans<<1) % MOD;
    }

    cout << ans << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}