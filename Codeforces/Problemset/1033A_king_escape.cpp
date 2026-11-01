#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

const int dr[] = {-1, 1, 0, 0, -1, -1, 1, 1};
const int dc[] = {0, 0, -1, 1, -1, 1, -1, 1};

void fill_chessboard(int n, vvi &chessboard, int a_row, int a_col) {
    chessboard[a_row][a_col] = -1;

    for (int i=0; i<8; i++) {
        int r = a_row + dr[i];
        int c = a_col + dc[i];

        while ((r >= 0 && r < n) && (c >= 0 && c < n)) {
            chessboard[r][c] = -1;
            r += dr[i];
            c += dc[i];
        }
    }
}

bool is_reachable(int n, vvi &chessboard, int curr_row, int curr_col, const int target_row, const int target_col) {
    if (curr_row == target_row && curr_col == target_col) return true;

    chessboard[curr_row][curr_col] = -1;

    for (int i=0; i<8; i++) {
        int new_r = curr_row + dr[i];
        int new_c = curr_col + dc[i];

        if ((new_r >= 0 && new_r < n) && (new_c >= 0 && new_c < n) && chessboard[new_r][new_c] != -1) {
            if (is_reachable(n, chessboard, new_r, new_c, target_row, target_col)) return true; 

        }
    }

    return false;
}

void solve() {
    int n; cin >> n;

    vvi chessboard(n, vi(n, 1));

    int a_row, a_col; cin >> a_row >> a_col; a_row--; a_col--;
    int b_row, b_col; cin >> b_row >> b_col; b_row--; b_col--;
    int c_row, c_col; cin >> c_row >> c_col; c_row--; c_col--;

    fill_chessboard(n, chessboard, a_row, a_col);

    bool ans = is_reachable(n, chessboard, b_row, b_col, c_row, c_col);
    
    cout << (ans ? "YES\n" : "NO\n");
}

int main() {
    fast;

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}