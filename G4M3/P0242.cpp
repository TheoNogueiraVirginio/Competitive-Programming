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
    int n; cin >> n;

    vector<string> words(n);
    for (int i=0; i<n; i++) cin >> words[i];

    sort(all(words));

    int q; cin >> q;
    string s;

    for (int i=0; i<q; i++) {
        cin >> s;
        
        auto start_it = lower_bound(all(words), s);
        auto end_it = lower_bound(all(words), s+'~');

        int ans = end_it - start_it;

        cout << ans << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}