#include <iostream>
#include <cstdio>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>


using namespace std;

typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef long long ll;


int arr[100011];
stack<int> ans;

int main() {
	string s;
	int size;
	getline(cin, s);
	size = s.size();

	for (int i = 0; i < size; i++) arr[i] = s[i] - '0';

	int cur = 0;
	for (int i = size - 1; i >= 0; i--) {
		if (arr[i] == 0) {
			cur++;
			ans.push(0);
		}
		else {
			if (cur) {
				cur--;
				ans.push(1);
			}
			else ans.push(0);
		}
	}

	while (!ans.empty()) {
		printf("%d", ans.top());
		ans.pop();
	}

}