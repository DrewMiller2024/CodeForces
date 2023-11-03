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
 
ll getPrime(ll n)
{
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n/i;
        }
    }
    if (n > 2)
        return n;
}

int32_t main() {
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++) {
      ll l, r;
      cin >> l >> r;
      ll a, b;
      if (r <= 3) {
        cout << -1 << endl;
      } else if (l < r) {
        a = 2;
        if (r % 2 == 0) {
          b = r-2;
        } else {
          b = r-3;
        }
        cout << a << " " << b << endl;
      } else {//l==r
        ll prime = getPrime(l);
        if (prime == l) {
          cout << -1 << endl;
        } else {
          cout << prime << " " << l - prime << endl;
        }
      }
    }
    return 0;
}