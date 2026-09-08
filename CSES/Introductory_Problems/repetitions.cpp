#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    string s; cin >> s;

    int current = 1;
    int max_sequence = 1;

    for (int  i=1; i<s.size(); i++) {
        if (s[i] == s[i-1]) current++;
        else current = 1;

        max_sequence = max(max_sequence, current);
    }

    cout << max_sequence << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}