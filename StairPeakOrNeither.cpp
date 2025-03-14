#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, a, b, c, s, p;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		s = p = 0;
		if (a < b && b < c) s = 1;
		if (a < b && b > c) p = 1;
		if (s == 0 && p == 0) {
			cout << "NONE" << "\n";
		}
		else if (s == 1) {
			cout << "STAIR" << "\n";
		}
		else {
			cout << "PEAK" << "\n";
		}
	}
	
	return 0;
}
