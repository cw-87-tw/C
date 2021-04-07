#include<stdio.h>
#include<queue>
#include<algorithm>
#include<string.h>
using namespace std;
typedef pair <int, int> p;
int arr[101][101], s, n, m, time[101][101], x, y, c = 1, t, mx[4] = {0, 1, 0, -1}, my[4] = {1, 0, -1, 0};
bool up;
void bfs(){
	memset(time, 0, 4 * m * n);
	queue <p> q;
	q.push(p(x, y));
	p cur;
	time[y][x] = 0;
	while (!q.empty()){
		cur = q.front(); q.pop();
		x = cur.first; y = cur.second; t = time[y][x];
		if (s && )
	}
}
int main(){
	while (scanf(" %d", &s) != EOF){
		if (s == 1) up = true;
		else up = false;
		scanf(" %d %d", &n, &m);
		for (int j = 0; j < m; j++){
			scanf(" %d", &arr[0][j]);
			if (arr[0][j]){
				x = j;
				y = 0;
			}
		}
		for (int i = 1; i < n; i++){
			for (int j = 0; j < m; j++){
				scanf(" %d", &arr[i][j]);
			}
		}
		bfs();
		printf("Case %d:", c++);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
}
