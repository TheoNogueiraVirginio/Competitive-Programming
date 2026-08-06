#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; 
    cin >> n;
    
    int safe_cells = 0, danger_cells = 0, conditional_cells = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;

            if (x <= 90) {
                cout << '+';
                safe_cells++;
            } else if (x > 100) {
                cout << '-';
                danger_cells++;
            } else {
                cout << 'o';
                conditional_cells++;
            }
        }
        cout << '\n';
    }

    cout << '\n';
    cout << "+: " << safe_cells << '\n';
    cout << "o: " << conditional_cells << '\n';
    cout << "-: " << danger_cells << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}