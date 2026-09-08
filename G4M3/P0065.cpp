#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n; cin >> n;
    int char_count = 0;

    while (n--) {
        string s; cin >> s;
        char_count += s.size();
        
        if (char_count <= 144) cout << s << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}