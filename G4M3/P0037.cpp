#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isPrime(long long n) {
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
    int a, b;
    cin >> a >> b;

    cout << (isPrime(a+b) ? "Xau\n" : "Xi\n");
}

int main() {
    fast;
    solve();

    return 0;
}