#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    // 6k +- 1
    for (long long i = 5; i <= n/i; i += 6) {
        if (n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

void solve() {
    int x; cin >> x;

    if (isPrime(x-1) && isPrime(x+1)) cout << x << " TIA\n";
    else cout << x << " NAH\n";
}

int main() {
    fast;
    solve();

    return 0;
}