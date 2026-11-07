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

void solve(int t) {
    int n, v;
    cin >> n >> v;

    ll winner = v-1;

    for (int i=0; i<n; i++) {
        int x; cin >> x;
        winner += x;        
    }

    winner = ((winner%n) +n) %n+1;

    cout << "Caso " << t << ": " << winner << '\n';
}

int main() {
    fast;

    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        solve(t);
    }
    
    return 0;
}