#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t;
	cin >> t;
	while (t--) {
		string p;
		cin >> p;
		for (char c = '1'; c <= '8'; c++) {
			string s;
			s += p[0];
			s += c;
			if (s != p) cout << s << "\n";
		}
		for (char c = 'a'; c <= 'h'; c++) {
			string s;
			s += c;
			s += p[1];
			if (s != p) cout << s << "\n";
		}
	}
	return 0;
}
