#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	double n, m, a; 
	ll ans;
	cin >> n >> m >> a;
	ans = ceil (n / a) * ceil (m / a);
	cout << ans << "\n";
	return 0;
}
