#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string line; cin >> line;

    if (line.find("oO") != string::npos || line.find("Oo") != string::npos) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    fast;
    solve();

    return 0;
}