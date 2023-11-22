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
    ll n, d;
    cin >> n;
    cin >> d;
    vll ps;
    for (ll i = 0; i < n; i++) {
        ll p;
        cin >> p;
        ps.pb(p);
    }
    sort(ps.begin(), ps.end());
    ll teams = 0;
    ll total = 0;
    for (int i = ps.size()-1; i >= 0; i--) {
      ll temp = ps[i];
      ll req = floor(d/temp)+1;
      if (req + total <= n) {
        total += req;
        teams++;
      } else {
        break;
      }
    }
    cout << teams << endl;
    return 0;
}

