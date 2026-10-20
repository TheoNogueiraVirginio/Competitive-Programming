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

    vi numbers(n+1);
    vector<vi> graph(n+1);

    for (int i=1; i<=n; i++) {
        cin >> numbers[i];

        int j = i-1;

        while (j > 0) {
            if (numbers[i] % numbers[j] == 0 ||
                numbers[j] % numbers[i] == 0) {
                    graph[j].PB(i);
                }
            j--;
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j : graph[i]) {
            cout << i << ' ' << j << '\n';
        }
    }
}

int main() {
    fast;
    solve();

    return 0;
}