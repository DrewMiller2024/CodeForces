#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main() {
	ll n;
	cin >> n;
	map<ll, ll> maps;
	vll vec(n+1); vec[0] = 0;
	for (ll i = 1; i <= n; i++) {
	    ll a;
	    cin >> a;
	    vec[i] = a;
	    maps.insert({a, i});
	}
	vll ans;
	bool can = false;
	for (ll i = 1; i <= n; i++) {
	    for (ll j = i+1; j <= n; j++) {
	        if (maps.find(vec[i] + vec[j]) != maps.end()) {
	            ans.push_back(maps[vec[i] + vec[j]]);
	            ans.push_back(i);
	            ans.push_back(j);
	            can = true;
	            break;
	        }
	    }
	    if (can) {
	        break;
	    }
	}
	if (can) {
	    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
	} else {
	    cout << -1 << endl;
	}
	return 0;
}
