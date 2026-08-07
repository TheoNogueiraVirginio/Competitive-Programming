#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, sum = 0;
    char dot;

    cin >> n;
    sum += n;

    for (int i = 0; i < 3; i++) {
        cin >> dot >> n;
        sum += n;
    }

    if (sum % 8 == 0) {
        cout << "BLOCK\n";
    } else {
        cout << "PASS\n";
    }
}

int main() {
    fast;
    solve();

    return 0;
}