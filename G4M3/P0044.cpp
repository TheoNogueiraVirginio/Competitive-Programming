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
    string s; cin >> s;

    string yes = "";
    int counter = 0;

    for (char c : s) {
        if (c == 'y' && yes.size()==0) yes += 'y';
        else if (c == 'e' && yes.size()==1) yes += 'e';
        else if (c == 's' && yes.size()==2) {
            counter++;
            yes = "";
        }
    }

    cout << counter << '\n';
}

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
    solve();
    }

    return 0;
}