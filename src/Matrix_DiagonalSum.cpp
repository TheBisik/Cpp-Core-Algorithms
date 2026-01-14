#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Podaj stopien macierzy: "; cin >> n;

    int gora = 0, dol = 0, temp;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n; k++) {
            cout << "Podaj element [" << i << "," << k << "]=";
            cin >> temp;
            if (i < k) gora += temp;
            else if (i > k) dol += temp;
        }
    }

    cout << "Suma elementow powyzej: " << gora << ", ponizej: " << dol << endl;
    if (gora > dol) cout << "Suma powyzej JEST wieksza." << endl;
    else cout << "Suma powyzej NIE JEST wieksza." << endl;

    return 0;
}