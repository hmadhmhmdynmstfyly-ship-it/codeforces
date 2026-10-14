#include <bits/stdc++.h>
#define null ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define dd long double
#define rall a.rbegin(), a.rend()
#define all a.begin() , a.end()
#define li LLONG_MIN
#define la LLONG_MAX
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, std::greater<int>, __gnu_pbds::rb_tree_tag,
    __gnu_pbds::tree_order_statistics_node_update> ordered_set;

void fast_io() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}
const int mod = 1000000007;
long long mul(long long a, long long b) { return ((a % mod) * (b % mod)) % mod; }
long long add(long long a, long long b) { return ((a % mod) + (b % mod)) % mod; }
long long sub(long long a, long long b) { return ((a % mod) - (b % mod) + mod) % mod; }

void solve() {
   ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    if (k==1) {
        for (ll i=0; i<n-1; i++) {
            if (a[i]>a[i+1]) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    } else {
        cout << "YES" << endl;
    }
}
int main() {
    fast_io();
    null
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; ++i) {
      solve();
    }

    return 0;
}