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

    vll numbers(n);
    for (int i=0; i<n; i++) {
        cin >> numbers[i];
    }

    int total_operations = 0;

    for (int i=n-2; i>=0; i--) {
        while (numbers[i] < numbers[i+1]) {
            numbers[i] <<= 1;
            total_operations++;
        }
    }

    cout << total_operations << '\n';
}

int main() {
    fast;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}