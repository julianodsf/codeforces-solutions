#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, a, b, c, ans;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		ans = 0;
		if (a == (b + c)) ans = 1;
		if (b == (a + c)) ans = 1;
		if (c == (a + b)) ans = 1;
		cout << (ans ? "YES" : "NO") << "\n";		
	}
	return 0;
}
