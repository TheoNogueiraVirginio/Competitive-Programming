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
    
    double x1,y1, x2,y2, x3,y3;
    cin >> x1 >> y1
        >> x2 >> y2
        >> x3 >> y3;

    double d1_2 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1); 
    double d1_3 = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1); 
    double d3_2 = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);    

    double x4, y4;

    if (d1_2 > d1_3 && d1_2 > d3_2) {
        x4 = x1 + x2 - x3;
        y4 = y1 + y2 - y3;
    } 
    else if (d1_3 > d1_2 && d1_3 > d3_2) {
        x4 = x1 + x3 - x2;
        y4 = y1 + y3 - y2;
    } 
    else {
        x4 = x2 + x3 - x1;
        y4 = y2 + y3 - y1;
    }

    cout << n << ' ' << fixed << setprecision(9) << x4 << ' ' << y4 << '\n';
}

int main() {
    fast;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}