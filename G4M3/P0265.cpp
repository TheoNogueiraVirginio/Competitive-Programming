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

void solve() {
    int n, d;
    cin >> n >> d;

    string s; cin >> s;
    int last_b = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            if (last_b == -1) {
                if (i > d) {
                    cout << "NO\n";
                    return;
                }
            } else {
                if (i-last_b > 2*d +1) {
                    cout << "NO\n";
                    return;
                }
            }
            last_b = i;
        }
    }

    if (last_b == -1 || (n -1 -last_b) > d) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main() {
    fast;
    solve();

    return 0;
}