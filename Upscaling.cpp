#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		string p1, p2;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				p1 += "##";
				p2 += "..";
			}
			else {
				p1 += "..";
				p2 += "##";
			}
		}
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				cout << p1 << "\n" << p1 << "\n";
			}
			else {
				cout << p2 << "\n" << p2 << "\n";
			}
		}
	}
	return 0;
}
