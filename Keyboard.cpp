#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	string keys = "qwertyuiopasdfghjkl;zxcvbnm,./qwertyuiopasdfghjkl;zxcvbnm,./";
	string s;
	char d;
	cin >> d >> s;
	for (int i = 0; i < s.size (); i++) {
		for (int j = 0; j < keys.size (); j++) {
			if (s[i] == keys[j]) {
				if (d == 'R') {
					cout << keys[j - 1];
				}
				else {
					cout << keys[j + 1];
				}
				break;
			}
		}
	}
	cout << "\n";
	return 0;
}
