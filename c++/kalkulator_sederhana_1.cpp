#include <iostream>

using namespace std;

int main() {
    double bilangan_1, bilangan_2;

    cout << "Masukkan Bilangan ke-1 : ";
    cin >> bilangan_1;
    cout << "Masukkan Bilangan ke-2 : ";
    cin >> bilangan_2;

    double jumlah, kurang, kali, bagi;
    
    jumlah = bilangan_1 + bilangan_2;
    kurang = bilangan_1 - bilangan_2;
    kali = bilangan_1 * bilangan_2;
    bagi = bilangan_1 / bilangan_2;

    cout << "Hasil Penjumlahan = " << jumlah << "\n";
    cout << "Hasil Pengurangan = " << kurang << "\n";
    cout << "Hasil Perkalian = " << kali << "\n";
    cout << "Hasil Pembagian = " << bagi << "\n";
}
