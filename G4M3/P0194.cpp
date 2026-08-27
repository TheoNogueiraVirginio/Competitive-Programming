#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n; cin.ignore();
    vector<string> verses(n);

    for (int i=0; i<n; i++) {
        getline(cin, verses[i]);
    }

    for (int i=n-1; i>=0; i--) {
        reverse(verses[i].begin(), verses[i].end());
        cout << verses[i] << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}