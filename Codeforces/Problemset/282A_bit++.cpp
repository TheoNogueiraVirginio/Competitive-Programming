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

void solve() {
    int n; cin >> n;
    int x = 0;
    
    string s;
    while (n--) {
        cin >> s;

        if (s[1] == '+') x++; 
        else x--;
    }
    
    cout << x << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}