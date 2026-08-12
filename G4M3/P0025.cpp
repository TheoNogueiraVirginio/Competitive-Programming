#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int total_videos=0, total_cuts=0;

    for (int i=0; i<n; i++) {
        int d; cin >> d;

        total_videos += d;
        total_cuts += d-1;
    }

    cout << total_cuts << ' ' << total_videos << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}