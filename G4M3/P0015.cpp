#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int a;

    priority_queue<int> seeds;

    while (seeds.size() < n && cin >> a) {
        if (a == 0) {
            cout << seeds.top() << '\n';
            seeds.pop();
            continue;
        }

        seeds.push(a);
    }
}

int main() {
    fast;
    solve();

    return 0;
}