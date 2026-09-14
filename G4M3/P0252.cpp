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

   vi numbers(n);
   for (int i=0; i<n; i++) {
        cin >> numbers[i];
   }

   int mid = n/2;
   nth_element(numbers.begin(), numbers.begin()+mid, numbers.end());

   cout << numbers[mid] << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}