#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int swaps_count = (c<b) + (b<a) + (c<a);

    cout << swaps_count << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}