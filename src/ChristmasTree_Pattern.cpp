#include <iostream>

using namespace std;

int main() {
    int h;
    cout << "Podaj wysokosc choinki: "; cin >> h;

    // Korona
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h - i - 1; j++) cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << endl;
    }

    // Pień
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < h - 1; j++) cout << " ";
        cout << "*" << endl;
    }

    return 0;
}