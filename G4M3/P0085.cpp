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

const int MOD = 7907;

void solve() {
    ll h; cin >> h;
    h = h%MOD;

    ll inclined_cards = (h*h + h);
    ll horizontal_cards = (h*(h-1)/2);

    ll total_cards = (inclined_cards + horizontal_cards) %MOD;
    
    cout << total_cards << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}