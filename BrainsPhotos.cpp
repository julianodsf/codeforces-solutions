#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int n, m;
	char a;
	string ans = "#Black&White";
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a;
			if (a == 'C' || a == 'M' || a == 'Y') ans = "#Color";
		}
	}
	cout << ans << "\n";
	return 0;
}
