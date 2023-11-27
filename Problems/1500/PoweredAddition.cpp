#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int32_t main() {
	cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vll vec(n);
		for (ll i = 0; i < n; i++) {
			ll a;
			cin >> a;
			vec[i] = a;
		}
		ll t = 0;
		for (ll i = 1; i < n; i++) {
			if (vec[i] < vec[i-1]) {
				ll count = 0;
				while (vec[i] < vec[i-1]) {
					count++;
					vec[i] = vec[i] + pow(2, count-1);
				}
				if (count > t) {
					t = count;
				}
				count--;
				while (vec[i] > vec[i-1]) {
					if (vec[i]-pow(2, count) >= vec[i-1]) {
						vec[i]= vec[i] - pow(2, count);
					}
					count--;
					if (count == -1) {
						break;
					}
				}
			}
		}
		cout << t << endl;
	}
	return 0;
}