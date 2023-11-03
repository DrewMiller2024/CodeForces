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
      double a, b, c;
      cin >> a >> b >> c;
      double req;
      if (a > b) {
        req = (a-b)/(2*c);
      } else {
        req = (b-a)/(2*c);
      }
      ll scoops = ceil(req);
      cout << scoops << endl;
    }
    return 0;
}