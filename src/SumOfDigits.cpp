#include <iostream>

using namespace std;

int main() {
    int liczba, suma = 0;
    cout << "Podaj liczbe: "; cin >> liczba;

    int temp = liczba;
    while (temp > 0) {
        suma += temp % 10;
        temp /= 10;
    }

    cout << "Suma cyfr rozwiniecia dziesietnego wynosi = " << suma << endl;
    return 0;
}