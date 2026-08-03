#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> priority(n);
    for (int i = 0; i < n; i++) {
        cin >> priority[i];
    }

    sort(priority.begin(), priority.end());

    for (int x : priority) {
        cout << x << "\n";
    }
}

int main() {
    fast;
    solve();
    
    return 0;
}