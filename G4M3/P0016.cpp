#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    long long n; cin >> n;
    int counter = 1;

    while (n > 1) {
        n /= 2;
        counter++;
    }

    cout << counter << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}