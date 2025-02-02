#include <iostream>
 
using namespace std;
 
int main () {
    int n, p, q, ans = 0;
    cin >> n;
    while (n--) {
        cin >> p >> q;
		// se um quarto cabe pelo menos mais 2
        if ((q - p) > 1) ans++;
    }
    cout << ans << "\n";
    return 0;
}