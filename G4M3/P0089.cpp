#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, m; cin >> n >> m;

    for (int i=1; i<29; i++) {
        if (i != n && i != m) cout << i << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}