#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long liczba;
    cout << "Podaj liczbe: "; cin >> liczba;

    if (liczba < 2) {
        cout << "Liczba " << liczba << " nie jest pierwsza ani zlozona." << endl;
        return 0;
    }

    bool pierwsza = true;
    unsigned long long dzielnik = 0;

    for (unsigned long long i = 2; i <= sqrt(liczba); i++) {
        if (liczba % i == 0) {
            pierwsza = false;
            dzielnik = i;
            break;
        }
    }

    if (pierwsza) cout << "Liczba " << liczba << " jest liczba pierwsza" << endl;
    else cout << "Liczba " << liczba << " jest liczba zlozona podzielna przez " << dzielnik << endl;

    return 0;
}