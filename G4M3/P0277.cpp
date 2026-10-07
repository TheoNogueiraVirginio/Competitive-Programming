#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

vector<vector<char>> matrix(3, vector<char>(3));
vector<vector<bool>> visited(3, vector<bool>(3, false));
vector<pair<int,int>> directions = {{0,-1}, {1,0}, {0,1}, {-1,0}};

int dfs(int x, int y) {
    int ans = 1;

    visited[x][y] = true;
    for (auto [dx, dy] : directions) {
        int new_x = x+dx;
        int new_y = y+dy;

        if ((new_x > 2) || (new_x < 0) || (new_y > 2) || (new_y < 0)) continue;
        if (matrix[new_x][new_y] == 'X' || visited[new_x][new_y]) continue;

        ans += dfs(new_x, new_y);
    }
    return ans;
}

void solve() {
    int l, c;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> matrix[i][j];

            if (matrix[i][j] == 'K') {
                l = i;
                c = j;
            }
        }
    }
    
    cout << dfs(l,c) << '\n';  
}

int main() {
    fast;
    solve();

    return 0;
}