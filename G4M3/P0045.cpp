#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int d, q;
    cin >> d >> q;

    vector<vector<bool>> grid(d, vector<bool>(d,false));
    vector<pair<int,int>> neighboors = {{0,-1}, {1,-1}, {1,0}, {1,1}, {0,1}, {-1,1}, {-1,0}, {-1,-1}};

    bool is_valid = true;

    for (int i=0; i<q; i++) {
        int x, y;
        cin >> x >> y;

        if (grid[x][y] == true) {
            is_valid = false;
            continue;
        }
        grid[x][y] = true;
    }

    for (int i=0; i<d; i++) {
        for (int j=0; j<d; j++) {
            int counter_neighboors = 0;
            for (const auto &[dx,dy] : neighboors) {
                int nx = i + dx;
                int ny = j + dy;

                if ((nx >= 0 && nx < d) && (ny >=0 && ny < d)) {
                    if (grid[nx][ny] == true) counter_neighboors++;
                }
            }
            if (counter_neighboors > 4) {
                is_valid = false;
                break;
            }
        }
        if (!is_valid) break;
    }
    cout << (is_valid ? "True\n" : "False\n");
}

int main() {
    fast;
    solve();

    return 0;
}