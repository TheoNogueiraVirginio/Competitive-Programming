#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n; cin >> n;
    
    int missing_number = n;

    for (int i=1; i<n; i++) {
        int x; cin >> x;
        missing_number ^= i ^ x;
    }

    cout << missing_number << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}