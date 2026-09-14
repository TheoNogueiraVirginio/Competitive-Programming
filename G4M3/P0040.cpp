#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s;
    
    while (getline(cin, s)) {
        size_t pos = s.find("How");

        if (pos != string::npos) {
            cout << pos + 1 << '\n';
        } else {
            cout << "-1\n";
        }
    }
}

int main() {
    fast;
    solve();

    return 0;
}