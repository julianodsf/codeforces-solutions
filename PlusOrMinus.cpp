#include <iostream>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		cout << ((a + b) == c ? "+" : "-") << "\n";
	}
	return 0;
}
