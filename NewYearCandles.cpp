#include <iostream>
#include <string>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int a, b, cnt = 0, ans;
	cin >> a >> b;
	ans = a;
	while (a--) {
		cnt++;
		if (cnt == b) {
			a++;
			ans++;
			cnt = 0;
		}
	}
	cout << ans << "\n";
	return 0;
}
