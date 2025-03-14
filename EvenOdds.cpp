#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	ll n, k;
	cin >> n >> k;
	if (k <= (n - (n / 2))) {
		cout << 2 * (k - 1) + 1 << "\n";
	}
	else {
		k = k - (n - (n / 2));
		cout << 2 * k << "\n";
	}
	return 0;
}
