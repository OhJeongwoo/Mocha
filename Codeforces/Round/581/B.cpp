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

int power[23];
int n, l, r;

void powers() {
	power[0] = 1;
	for (int i = 1; i < 23; i++) power[i] = power[i - 1] * 2;
}

int main() {
	powers();
	scanf("%d %d %d", &n, &l, &r);
	int ans1 = power[l] - 1 + n - l;
	int ans2 = power[r] - 1 + (n - r)*power[r - 1];
	printf("%d %d\n", ans1, ans2);
}