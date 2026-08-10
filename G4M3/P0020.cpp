#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;

    vector<string> grid(n);

    constexpr array<int, 8> dj = {-1, -1, 0, 1, 1, 1, 0, -1};
    constexpr array<int, 8> di = {0, 1, 1, 1, 0, -1, -1, -1};

    for (int i=0; i<n; i++) {
        cin >> grid[i];
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int counter=0;

            if (grid[i][j] == '*') {
                cout << 9;
                continue;
            } else {
                for (int k=0; k<8; k++) {
                    int neighbor_x = j + dj[k];
                    int neighbor_y = i + di[k];

                    if (neighbor_x >= 0 && neighbor_x < n && neighbor_y >= 0 && neighbor_y < n){
                        if (grid[neighbor_y][neighbor_x] == '*') {
                            counter++;
                        }
                    }
                }
                cout << counter;
            }
        }
        cout << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}