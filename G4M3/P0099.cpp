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
    cin.ignore();

    vector<bool> is_present(256, false);
    
    while (n--) {
        string s;
        getline(cin, s);

        for (char c : s) is_present[tolower((unsigned char)c)] = true;
    }

    for (char c='a'; c<='z'; c++) {
        if (!is_present[c]) cout << c;
    }
    cout << '\n';
}


int main() {
    fast;
    solve();

    return 0;
}