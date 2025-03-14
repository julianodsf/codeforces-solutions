#include <iostream>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int n, m, a, curr = 1;
	ll ans = 0;
	cin >> n >> m;
	while (m--) {
		cin >> a;
		if (a == curr) continue;
		if (a > curr) {
			ans += a - curr;
		}
		else {
			ans += n - (curr - a);
		}
		curr = a;
	}
	cout << ans << "\n";
	return 0;
}
