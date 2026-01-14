#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, wynik;
    cout << "Podaj liczbe a: "; cin >> a;
    cout << "Podaj liczbe b: "; cin >> b;
    cout << "Podaj liczbe c: "; cin >> c;

    if (c > 0) {
        wynik = pow(a, 2) + b;
        cout << "Wartosc wyrazenia wynosi: " << wynik << endl;
    } else if (c < 0) {
        wynik = a - pow(b, 2);
        cout << "Wartosc wyrazenia wynosi: " << wynik << endl;
    } else { // c == 0
        if (a - b != 0) {
            wynik = 1.0 / (a - b);
            cout << "Wartosc wyrazenia wynosi: " << wynik << endl;
        } else {
            cout << "Proba dzielenia przez zero" << endl;
        }
    }
    return 0;
}