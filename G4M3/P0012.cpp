#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string seed;
    unordered_map<string, int> seed_count;

    while (cin >> seed && seed != "FIM") {
        seed_count[seed]++;

        cout << seed << " " << seed_count[seed] << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}