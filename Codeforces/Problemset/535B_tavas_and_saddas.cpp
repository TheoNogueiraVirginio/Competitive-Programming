#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    
    long long previous_blocks = (1ULL << s.length()) - 2;

    long long binary_offset=0;
    for (char c : s) {
        binary_offset <<= 1;
        if (c=='7') {
            binary_offset |= 1;
        }
    }

    long long index = previous_blocks + binary_offset + 1;
    
    cout << index << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}