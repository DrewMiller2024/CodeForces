#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int32_t main() {
	cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin >> n;
  ll a;
  ll b;
  if (n == 1) {
    cout << "No" << endl;
    return 0;
  } else if ((n % 3) == 0) {
    a = 0;
    b = (n / 3);
  } else if ((n % 3) == 1) {
    a = 2;
    b = (n-4) / 3;
  } else {
    a = 1;
    b = (n-2) / 3;
  }
  cout << a << " " << b << endl;;
  return 0;
}