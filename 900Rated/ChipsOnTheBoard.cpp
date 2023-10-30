#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
	    ll n;
	    cin >> n;
	    ll sumRow = 0;
	    ll lowestInRow = LLONG_MAX;
	    for (ll j = 0; j < n; j++) {
	        ll temp;
	        cin >> temp;
	        if (temp < lowestInRow) {
	            lowestInRow = temp;
	        }
	        sumRow += temp;
	    }
	    ll sumColumn = 0;
	    ll lowestInColumn = LLONG_MAX;
	    for (ll j = 0; j < n; j++) {
	        ll temp;
	        cin >> temp;
	        if (temp < lowestInColumn) {
	            lowestInColumn = temp;
	        }
	        sumColumn += temp;
	    }
	    sumColumn += (lowestInRow*n);
	    sumRow += (lowestInColumn*n);
	    if (sumRow < sumColumn) {
	        cout << sumRow << endl;
	    } else {
	        cout << sumColumn << endl;
	    }
	}
	return 0;
}