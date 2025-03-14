#include <iostream>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, a, b, c, d, ans;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;
		ans = 0;
		if (a < b) ans++;
		if (a < c) ans++;
		if (a < d) ans++;
		cout << ans << "\n";
	}
	return 0;
}
