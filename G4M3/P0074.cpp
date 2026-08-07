#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (any_of(s.begin(), s.end(), ::isdigit)) {
        cout << s << " YES\n";
    } else {
        cout << s << " NO\n";
    }
}

int main() {
    fast;
    solve();

    return 0;
}