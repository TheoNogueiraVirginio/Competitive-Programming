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

    int better_scores = 0;
    for (int i=0; i<n; i++) {
        int score; cin >> score;

        if (score > 700) better_scores++;
    }

    cout << (better_scores < 10 ? "FINALMENTE\n" : "FALHOU\n");
}

int main() {
    fast;
    solve();

    return 0;
}