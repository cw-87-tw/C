#include<stdio.h>
const int MAX_N = 1000;
int n, a[MAX_N + 1], k, t;
bool ans = false;
void rec(int i, int sum){ //�ĴX��, ���F�X��, �ثe�`�M 
	if (ans) return;
	if (sum == k){
		ans = true;
		return;
	}
	if (sum > k) return;
	if (i == n) return;
	rec(i + 1, sum);
	rec(i + 1, sum + a[i]);
}
int main(){
	scanf(" %d", &t);
	while(t--){
		ans = false;
		scanf(" %d", &k);
		scanf(" %d", &n);
		for (int i = 0; i < n; i++) scanf(" %d", &a[i]);
		rec(0, 0); //�ĴX��, �`�M 
		if (ans) printf("YES\n");
		else printf("NO\n");
	}
}
