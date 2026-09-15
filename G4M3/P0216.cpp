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
    int n, x;
    cin >> n >> x;

    vll numbers(n);
    for (int i=0; i<n; i++) {
        cin >> numbers[i];
    }

    long long current_sum = 0;
    int left = 0;

    for (int right=0; right<n; right++) {
        current_sum += numbers[right];

        while (current_sum > x && left <= right) {
            current_sum -= numbers[left];
            left++;
        }
        
        if (current_sum == x) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    fast;
    solve();

    return 0;
}