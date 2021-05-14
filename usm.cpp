#include<stdio.h>
const int MAX_N = 100;
int n, a[MAX_N], m[MAX_N], k;
bool ans = false;
void rec(int i, int j, int sum){ //第幾項, 拿了幾個, 目前總和 
	if ((!ans) && sum == k){
		ans = true;
		return;
	}
	if (i == n) return;
	if (j == m[i]) {
		rec(i + 1, 0, sum);
		return;
	}
	rec(i + 1, 0, sum);
	rec(i, j + 1, sum + a[i]);
}
int main(){
	scanf(" %d", &n);
	for (int i = 0; i < n; i++) scanf(" %d", &a[i]);
	for (int i = 0; i < n; i++) scanf(" %d", &m[i]);
	scanf(" %d", &k);
	rec(0, 0, 0); //第幾項, 拿了幾個 
	if (ans) printf("YES\n");
	else printf("NO\n");
}
