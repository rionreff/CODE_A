#include <iostream>

using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;

    if ( bilangan % 2 == 0 ) {
        cout << bilangan << " adalah bilangan Genap\n";
    }
    else {
        cout << bilangan << " adalah bilangan Ganjil\n";
    }
}
