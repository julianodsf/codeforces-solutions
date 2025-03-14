#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, a, b;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		a = b = 0;
		for (int i = 0; i < 5; i++) {
			if (s[i] == 'A') {
				a++;
			}
			else {
				b++;
			}
		}
		cout << (a > b ? "A" : "B") << "\n";
	}
	return 0;
}
