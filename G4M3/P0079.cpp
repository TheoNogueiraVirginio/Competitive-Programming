#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    bool found = any_of(s.begin(), s.end(), [](unsigned char c) {return c=='B';});

    cout << (found ? "Borboletas Sempre Voltam\n" : "Nem Sempre\n");
}

int main() {
    fast;
    solve();

    return 0;
}