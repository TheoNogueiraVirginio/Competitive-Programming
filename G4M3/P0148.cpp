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
    int n, q;
    cin >> n >> q;

    vi numbers(n+1);
    for (int i=1; i<=n; i++) {
        cin >> numbers[i];
    }

    vi max_left(n+2,0);
    vi max_right(n+2,0);

    for (int i=1; i<=n; i++) {
        max_left[i] = max(max_left[i-1], numbers[i]);

        int j = (n-i)+1;
        max_right[j] = max(max_right[j+1], numbers[j]);
    }

    for (int i=0; i<q; i++) {
        int query; cin >> query;
        cout << max_left[query-1] + max_right[query+1] << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}