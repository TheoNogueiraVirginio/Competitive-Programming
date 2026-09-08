#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    long long n; cin >> n;

    while (true) {
        cout << n;

        if (n==1) break;
        
        n = ((n&1) ? (n*3+1) : (n>>1));
        cout << ' ';
    }
    cout << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}