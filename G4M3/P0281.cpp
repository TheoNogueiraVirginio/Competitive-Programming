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

void solve() {
    int qtd_max = 0, qtd;
    for (int i=0; i<6; i++) {
        qtd = 0;
        for (int j=0; j<6; j++) {
            int x; cin >> x;
            if (x == 1) qtd++;
        }

        qtd_max = max(qtd_max, qtd);
    }

    cout << qtd_max << '\n';
}

int main() {
    fast;

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}