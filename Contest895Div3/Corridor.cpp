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
    for (int i = 0; i < t; i++) {
      ll n;
      cin >> n;
      ll farK = LLONG_MAX;
      for (int j = 0; j < n; j++) {
        ll d, s;
        cin >> d >> s;
        ll k = d-1 + floor((1+s)/2);
        if (k < farK) {
          farK = k;
        } 
      }
      cout << farK << endl;
    }
    return 0;
}