#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int print_limit = min(n, 32);

    for (int i=0; i<n; i++) {
        int x; 
        cin >> x;
        
        if (i < print_limit) {
            cout << x << '\n';
        }
    }
}

int main() {
    fast;
    solve();

    return 0;
}