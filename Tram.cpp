#include <iostream>
 
using namespace std;
 
int main () {
    int n, a, b, t = 0, ans = 0;
    cin >> n;
    while (n--) {
        cin >> a >> b;
		// "a" pessoas descem do trem
        t -= a;
		// "b" pessoas embarcam no trem
        t += b;
		// guarda o maior registro de pessoas
		// que ja estiveram no trem
        ans = max (ans, t);
    }
    cout << ans << "\n";
    return 0;
}