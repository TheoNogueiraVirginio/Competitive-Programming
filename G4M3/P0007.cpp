#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; 
    while (cin >> n) {
        unordered_set<string> seen;

        for (int i = 0; i < n; i++) {
            string name; 
            cin >> name;

            if (seen.insert(name).second) {
                cout << name << '\n';
            }
        }
    }
}

int main() {
    fast;
    solve();

    return 0;
}