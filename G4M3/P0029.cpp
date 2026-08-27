#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int t; cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        int current_pos = 0;
        int min_pos = 0;
        int max_pos = 0;

        for (int i = 0; i < n; i++) {
            int move; cin >> move;
            
            current_pos += move;
            min_pos = min(min_pos, current_pos);
            max_pos = max(max_pos, current_pos);
        }

        int total_digits = n + 1;
        int valid_starting_passwords = 10 - (max_pos - min_pos);

        cout << total_digits << ' ' << valid_starting_passwords << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}