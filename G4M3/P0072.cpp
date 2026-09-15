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
    vector<int> numbers(n);

    for (int i=0; i<n; i++) {
        cin >> numbers[i];
    }
    
    int current_sign = 1;
    for (int i=n-1; i>=0; i--) {
        if (numbers[i] < 0) current_sign *= -1;
        numbers[i] *= current_sign;
    }

    for (int i=0; i<n; i++) {
        cout << numbers[i] << (i==n-1 ? '\n' : ' ');
    }
}

int main() {
    fast;
    solve();

    return 0;
}