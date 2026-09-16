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
    
    if (n<5) {
        cout << "nenhuma tripla\n";
        return;
    }

    for (int a=1; a<=n; a++) {
        for (int b=a; b<=n; b++) {
            int c2 = a*a + b*b;
            int c = sqrt(c2);

            if (c <= n && c*c == c2) {
                cout << a << ' ' << b << ' ' << c << '\n';
            }
        }
    }
}

int main() {
    fast;
    solve();

    return 0;
}