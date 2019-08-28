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

int arr[111];

int main() {
	string s;
	cin >> s;
	int size = s.size();
	for (int i = 0; i < size; i++) arr[i] = s[i] - '0';


	if (size % 2 == 0) {
		printf("%d\n", size / 2);
		return 0;
	}
	else {
		bool check = false;
		for (int i = 1; i < size; i++) {
			if (arr[i] == 1) check = true;
		}
		if (check) {
			printf("%d\n", size / 2 + 1);
			return 0;
		}
		else {
			printf("%d\n", size / 2);
			return 0;
		}
	}

}