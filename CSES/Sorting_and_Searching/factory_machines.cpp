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

ll calculate_products(const vi &numbers, const ll &middle, const ll &t) {
    ll products = 0;
    for (int n : numbers) {
        products += middle/n;
        if (products >= t) return products;
    }

    return products;
}

ll binary_search(const vi &numbers, const ll &t) {
    ll left = 0;
    ll right = t * (*min_element(all(numbers)));

    while (left<=right) {
        ll middle = left + (right-left) /2;

        ll products = calculate_products(numbers, middle, t);

        if (products >= t) {
            right = middle-1;
            continue;
        }

        if (products < t) {
            left = middle+1;
            continue;
        }
    }
    return left;
}

void solve() {
    long long n, t;
    cin >> n >> t;

    vi numbers(n);

    for (int i=0; i<n; i++) {
        cin >> numbers[i];
    }

    ll minimum_time = binary_search(numbers, t);
    cout << minimum_time << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}