#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n; cin >> n;

    int root = sqrt(n);

    cout << (root*root==n ? "SIM\n" : "NAO\n");
}

int main() {
    fast;
    solve();

    return 0;
}