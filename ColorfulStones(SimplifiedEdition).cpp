#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	string s, t;
	int curr = 0;
	cin >> s >> t;
	for (int i = 0; i < t.size (); i++) {
		if (t[i] == s[curr]) curr++;
	}
	cout << curr + 1 << "\n";
	return 0;
}
