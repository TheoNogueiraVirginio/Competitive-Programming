#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n; cin >> n;

    if (n==2 || n==3) {
        cout << "NO SOLUTION\n";
        return;
    }

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << (i + 2 <= n ? " " : "\n");
    }
}

int main() {
    fast;
    solve();

    return 0;
}