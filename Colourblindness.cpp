#include <iostream>
#include <string>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int m, n, ans;
	string s, t;
	cin >> m;
	while (m--) {
		cin >> n;
		cin >> s >> t;
		ans = 1;
		for (int i = 0; i < s.size (); i++) {
			if (s[i] == t[i] || (s[i] == 'G' && t[i] == 'B') || (s[i] == 'B' && t[i] == 'G')) continue;
			ans = 0;
		}
		cout << (ans ? "YES" : "NO") << "\n";
	}
	return 0;
}
