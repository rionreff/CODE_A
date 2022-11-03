#include <iostream>

using namespace std;

int main() {
    // Luas = panjang * lebar
    // Keliling = 2 * ( panjang + lebar )
    
    int panjang, lebar;
    int luas, keliling;

    cout << "Masukkan Nilai Panjang : ";
    cin >> panjang;
    cout << "Masukkan Nilai Lebar : ";
    cin >> lebar;

    luas = panjang * lebar;
    keliling = 2 * ( panjang + lebar );

    cout << "Luas = " << luas << "\n";
    cout << "Keliling = " << keliling << "\n";
}
