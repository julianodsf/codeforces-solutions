#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (n % 10) + (n / 10) << "\n";
	}
	return 0;
}
