#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
 
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;
 
 
int32_t main() {
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        ll n;
        cin >> n;
        ll sum1 = 0; 
        for (ll j = 0; j < n; j++) {
            ll a;
            cin >> a;
            sum1 += a;
        }
        ll maxB = LLONG_MIN;
        ll sum2 = 0;
        for (ll j = 0; j < n; j++) {
            ll b;
            cin >> b;
            sum2 = sum2 + b;
            if (b > maxB) {
                maxB = b;
            }
        }
        sum2 = sum2 - maxB;
        ll sum3 = sum1 + sum2;
        cout << sum3 << endl;
    }
    return 0;
}