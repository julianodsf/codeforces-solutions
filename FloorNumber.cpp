#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, ans;
	cin >> t;
	while (t--) {
		double n, x;
		cin >> n >> x;
		ans = ceil ((n - 2) / x);
		ans = 1 + max (0, ans);
		cout << ans << "\n";
	}
	return 0;
}
