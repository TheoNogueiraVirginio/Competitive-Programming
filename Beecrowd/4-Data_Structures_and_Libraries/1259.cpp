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
    int n; cin >> n;
    vi odd_numbers, even_numbers;

    while (n--) {
        int x; cin >> x;

        if (x&1) odd_numbers.PB(x);
        else even_numbers.PB(x);
    }

    sort(all(even_numbers));
    sort(all(odd_numbers), [](const int &n1, const int &n2) {return n1>n2;});

    for (int i=0; i<even_numbers.size(); i++) cout << even_numbers[i] << '\n';
    for (int i=0; i<odd_numbers.size(); i++) cout << odd_numbers[i] << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}