#include <iostream>

using namespace std;

int main() {
    // 5! = 5 x 4 x 3 x 2 x 1 = 120

    int bilangan;
    int hasil = 1;

    cout << "Masukkan Bilangan : ";
    cin >> bilangan;

    cout << bilangan << "! = ";
    
    for (int i=bilangan; i>=1; i--) {
        hasil *= i;
        cout << i;
        if ( i == 1 ) {
            cout << " = ";
        }
        else {
            cout << " x ";
        }
    }
    cout << hasil << "\n";
}
