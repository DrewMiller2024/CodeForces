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
    int w;
    cin >> w;
    if (w < 4) {
        cout << "NO" << endl;
    } else if (w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
	return 0;
}