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

    map<int,int> numbers;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        numbers[x]++;
    }

    ll counter_possib = 0;

    for (auto it_i = numbers.begin(); it_i != numbers.end(); it_i++) {
        for (auto it_j = it_i; it_j != numbers.end(); it_j++) {
            for (auto it_k = it_j; it_k != numbers.end(); it_k++) {
                ll a=it_i->first, q_a = it_i->second;
                ll b=it_j->first, q_b = it_j->second;
                ll c=it_k->first, q_c = it_k->second;

                if (a+b <= c) break;
                if ((a==1 && b==1 && c==1) || (a==1 && b==2 && c==2)) continue;

                if (a==b && b==c) {
                    if (a>=2 && q_a >=3) {
                        counter_possib += (q_a*(q_a-1)*(q_a-2))/6;
                    }
                }

                else if (a==b && b < c) {
                    if (q_a >= 2) {
                    counter_possib += (q_a * (q_a - 1) / 2) * q_c;
                    }
                }

                else if (a<b && b==c) {
                    if (q_b >= 2) {
                        counter_possib += q_a * (q_b * (q_b - 1) / 2);
                    }
                }

                else counter_possib += q_a * q_b * q_c;
            }
        }
    }
    cout << counter_possib << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}