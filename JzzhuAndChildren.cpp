#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int n, m, stp = 0, ans;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	while (!stp) {
		stp = 1;
		for (int i = 0; i < n; i++) {
			if (a[i]) {
				a[i] = max (0, a[i] - m);
				stp = 0;
				if (a[i] == 0) ans = i;
			}
		}
	}
	cout << ans + 1 << "\n";
	return 0;
}
