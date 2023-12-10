#include <bits/stdc++.h>
using namespace std;
 
int T, n, m;
 
int ask(int x, int y) {
	printf("? %d %d\n", x, y);
	fflush(stdout);
	scanf("%d", &x);
	return x;
}
 
void give(int x, int y) {
	printf("! %d %d\n", x, y);
	fflush(stdout);
}
 
int main() {
	for(scanf("%d", &T);T;T--) {
		scanf("%d%d", &n, &m);
		int T1 = ask(1, 1);
		if(T1 >= n) {
			int T2 = ask(1, T1+1);
			give(T2+1, T1+1);
		}
		else if(T1 >= m) {
			int T2 = ask(T1+1, 1);
			give(T1+1, T2+1);
		}
		else {
			int T2 = ask(T1+1, 1);
			int T3 = ask(1, T1+1);
			if(T2 == T1 && T3 == T1) give(T1+1, T1+1);
			else if(T3 == T1) give(T1+1, T2+1);
			else give(T3+1, T1+1);
		}
	}
	return 0;
}