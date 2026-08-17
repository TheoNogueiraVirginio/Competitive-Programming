#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> prefix(n+1);

    for (int i=1; i<=n; i++) {
        long long x; cin >> x;
        prefix[i] = prefix[i-1] + x;
    }

    for (int i=0; i<q; i++) {
        int a, b;
        cin >> a >> b;

        cout << prefix[b] - prefix[a-1] << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}