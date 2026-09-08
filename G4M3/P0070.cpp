#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n; cin >> n;
    vector<int> first_line(n);

    for (int i=0; i<n; i++) {
        cin >> first_line[i];
    }

    for (int i=0; i<n; i++) {
        int x; cin >> x;
        cout << (max(x,first_line[i])) << (i==n-1 ? '\n' : ' ');
    }
}

int main() {
    fast;
    solve();

    return 0;
}