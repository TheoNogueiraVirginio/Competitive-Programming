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
    int n, m;
    cin >> n >> m;

    vector<string> last_words(n);

    string word;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> word;
        }
        last_words[i] = word;
    }

    int q; cin >> q;
    string s;

    for (int i=0; i<q; i++) {
        cin >> s;

        auto it = lower_bound(all(last_words), s);
        int page = (it - last_words.begin()) +1;

        cout << page << '\n';
    }    
}

int main() {
    fast;
    solve();

    return 0;
}