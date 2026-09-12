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

void solve() {
    int n, t;
    cin >> n >> t;
    
    vi books(n);
    for (int i=0; i<n; i++) cin >> books[i];

    int current_sum = 0;
    int sequence = 0;
    int max_sequence = 0;

    for (int i=0; i<n; i++) {
        current_sum += books[i];

        while (current_sum > t) {
            current_sum -= books[i-sequence];
            sequence--;
        }

        sequence++;
        max_sequence = max(max_sequence, sequence);
    }

    cout << max_sequence << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}