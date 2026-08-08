#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int x; cin >> x;

    if (x < 5) {
        cout << "Flopou!\n";
    }
    else if (5 <= x && x <= 30) {
        cout << "Foi massa!\n";
    }
    else {
        cout << "Foi top demais!\n";
    }
}

int main() {
    fast;
    solve();

    return 0;
}