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
    int n; cin >> n;
    size_t total = (1<<n);

    for (int i=0; i<total; i++) {
        int code = i ^ (i >> 1);

        for (int j=n-1; j>=0; j--) {
            cout << ((code >> j) & 1);
        }
        cout << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}