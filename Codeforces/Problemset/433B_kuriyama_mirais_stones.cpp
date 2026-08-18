#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void setup_rocks (const int &n, vector<int> &rocks, vector<long long> &prefix, vector<long long> &ordered_prefix) {
    for (int i=1; i<=n; i++) {
        int v; cin >> v;
        rocks[i] = v;
        prefix[i] = prefix[i-1] + v;
    }

    sort(rocks.begin()+1, rocks.end());
    for (int i=1; i<=n; i++) {
        ordered_prefix[i] = ordered_prefix[i-1] + rocks[i];
    }
}

void solve() {
    int n; cin >> n;
    vector<int> rocks(n+1);
    vector<long long> prefix(n + 1);
    vector<long long> ordered_prefix(n + 1);

    setup_rocks(n, rocks, prefix, ordered_prefix);

    int m; cin >> m;
    for (int i=0; i<m; i++) {
        int type, l, r;
        cin >> type >> l >> r;

        switch (type) {
            case 1:
                cout << prefix[r] - prefix[l-1] << '\n';
                break;
            case 2:
                cout << ordered_prefix[r] - ordered_prefix[l-1] << '\n';
                break;
        }
    }
}

int main() {
    fast;
    solve();

    return 0;
}