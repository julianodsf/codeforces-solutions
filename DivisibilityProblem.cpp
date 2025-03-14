#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, ans;
	double a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		ans = (ceil (a / b) * b) - a;
		cout << ans << "\n";
	}
	return 0;
}
