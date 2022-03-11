#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using vi = vector<int>;

map<int, int> powerCounts;
void solve(int n) {
	const auto& sz = powerCounts.size();
	for (int i = 1; i <= n; ++i) {
		if (i <= sz) {
			cout << sz << ' ';
		}
		else {
			cout << i << ' ';
		}
	}

	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < t) {
		int n;
		cin >> n;
		powerCounts.clear();
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (powerCounts.end() == powerCounts.find(a)) {
				powerCounts.insert({ a, 1 });
			}
			else {
				++powerCounts[a];
			}
		}

		solve(n);

		--t;
	}

	return 0;
}