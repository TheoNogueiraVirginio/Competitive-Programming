#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    string s;
    getline(cin, s);

    reverse(s.begin(), s.end());
    
    cout << s << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}