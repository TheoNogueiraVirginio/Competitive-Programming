#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    if (!(cin >> n)) return;

    string ignored_line;
    getline(cin >> ws, ignored_line);

    cout << n-1 << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}