#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int x, ans;
	cin >> x;
	ans = x / 5;
	if (x % 5) ans++;
	cout << ans << "\n";
	return 0;
}
