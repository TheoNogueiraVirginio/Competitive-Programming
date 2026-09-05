#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    double a; cin >> a;

    int m = a*2;
    int h = m / 60;
    m %= 60;

    cout << h << 'h' << m << "m\n";
}

int main() {
    fast;
    solve();

    return 0;
}