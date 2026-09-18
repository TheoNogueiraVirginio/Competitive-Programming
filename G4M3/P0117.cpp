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
    unordered_map<string,int> words;
    words.reserve(n * m);

    for (int i=0; i<n*m; i++) {
        string s; cin >> s;        
        words.emplace(s,(i/m)+1);
    }

    int q; cin >> q;
    for (int i=0; i<q; i++) {
        string s; cin >> s;
        cout << s << ' ' << words[s] << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}