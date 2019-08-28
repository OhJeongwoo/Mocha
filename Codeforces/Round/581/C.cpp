#include <cstdio>
#include <iostream>
#include <string>
#include<math.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<map>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;

const int INF = 1e9 + 7;

int n, m;
int dist[101][101];
int path[1000011];
int maxi[101];


int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int x;
			scanf("%1d", &x);
			if (x == 1) dist[i][j] = 1;
			else dist[i][j] = INF;
		}
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
		}
	}



	scanf("%d", &m);



	for (int i = 1; i <= m; i++) scanf("%d", path + i);

	queue<int> ans;
	int cur = path[1];
	int tt = 1;
	ans.push(cur);
	while (tt < m) {
		int M = 0;
		for (int i = 1; i <= n; i++) {
			if (i == cur) continue;
			int x = dist[cur][i];
			if (tt + x > m) continue;
			if (path[tt + x] == i) {
				if (M < x) M = x;
			}
		}
		tt += M;
		cur = path[tt];
		ans.push(cur);
	}

	printf("%d\n", ans.size());
	while (!ans.empty()) {
		printf("%d ", ans.front());
		ans.pop();
	}

}