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
    int n; 
    cin >> n;

    vector<int> freq(101, 0);

    for (int i = 0; i < n; i++) {
        int id, height;
        cin >> id >> height;
        freq[height]++;
    }

    ll total_permutations = 1;

    for (int h = 1; h <= 100; h++) {
        if (freq[h] == 0) continue;

        ll height_factorial = 1;
        for (int k = 1; k <= freq[h]; k++) {
            height_factorial *= k;
        }

        total_permutations *= height_factorial;
    }

    cout << total_permutations << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}