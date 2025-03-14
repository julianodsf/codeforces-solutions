#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t;
	cin >> t;
	while (t--) {
		char b[9][9];
		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {
				cin >> b[i][j];
			}
		}
		for (int i = 2; i <= 7; i++) {
			for (int j = 2; j <= 7; j++) {
				if (b[i][j] == '#' && b[i + 1][j + 1] == '#' && b[i - 1][j - 1] == '#' && b[i - 1][j + 1] == '#' && b[i + 1][j - 1] == '#') {
					cout << i << " " << j << "\n";
				}
			}
		}
	}
	return 0;
}
