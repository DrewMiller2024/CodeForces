#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

bool sorte(const pll& a, const pll& b) {
    if(a.first != b.first) {
        return (a.first > b.first);
    } else {
        return (a.second < b.second);
    }
}
 
int32_t main() {
	cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
	    ll n, k;
	    cin >> n >> k;
	    vector<pair<ll,ll>> mons;
	    for (ll j = 0; j < n; j++) {
	        ll temp;
	        cin >> temp;
          ll mod;
          if (temp % k == 0) {
            mod = k;
          } else {
	          mod = temp % k;
          }
	        mons.push_back({mod, j});
	    }
		sort(mons.begin(), mons.end(), sorte);
		for (int i = 0; i < mons.size(); i++) {
        cout << mons[i].second + 1 << " ";
		}
		cout << endl;
	}
	return 0;
}