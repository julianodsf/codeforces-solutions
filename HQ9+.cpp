#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	string s;
	int ans = 0;
	cin >> s;
	for (int i = 0; i < s.size (); i++) {
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
		    ans = 1;
		    break;
		}
	}
	cout << (ans ? "YES" : "NO") << "\n";
	return 0;
}
