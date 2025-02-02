#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
    int n, h, a, ans;
    cin >> n >> h;
	// no melhor dos casos, cada um dos amigos ocupa apenas
	// uma unidade de largura
    ans = n;
    while (n--) {
        cin >> a;
		// se a > h, o amigo ocupa 2 unidades de largura
        if (a > h) ans++;
    }
    cout << ans << "\n";
    return 0;
}