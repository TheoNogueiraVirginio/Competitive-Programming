#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    bool bugs = false;

    for (int i=0; i<n; i++) {
        string line; cin >> line;

        if (line.find('B') != string::npos) {
            bugs = true;
        }
    }

    cout << (bugs ? "YES\n" : "NO\n");
}

int main() {
    fast;
    solve();

    return 0;
}