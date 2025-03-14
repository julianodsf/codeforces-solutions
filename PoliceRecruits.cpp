#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int n, x, r = 0, ans = 0;
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == -1) {
			if (r) {
				r--;
			}
			else {
				ans++;
			}
		}
		else {
			r += x;
		}
	}
	cout << ans << "\n";
	return 0;
}
