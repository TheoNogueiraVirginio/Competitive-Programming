#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int counter_sirens = 0;
    for (int i=0; i<32; i++) {
        int h, m, s;
        char sep;
        cin >> h >> sep >> m >> sep >> s;

        if (h>=24 || m>=60 || s>=60) continue;
        if (h<6 || h>=22) counter_sirens++;

    }
    cout << counter_sirens << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}