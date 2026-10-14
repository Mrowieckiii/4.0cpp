#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Podaj ilosc punktow: " << endl;
        int punkty;
    cin >> punkty;

    if (punkty < 0 || punkty > 100) {
        cout << "Blad zakres to 0-100pkt!!";
        return 0;
    }else if (punkty >= 90 ) {
    cout << "Ocena 5";
    }else if (punkty >= 75) {
        cout << "Ocena 4";
    }else if (punkty >= 55) {
        cout << "Ocena 3";
    }else if (punkty >= 35) {
        cout << "Ocena 2";
    }else {
        cout << "Ocena 1";
    }
    return 0;
}