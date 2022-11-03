#include <iostream>

using namespace std;

int main() {
    /*
         *
         **
         ***
         ****
         *****
    */
    int tinggi;

    cout << "Masukkan Tinggi Segitiga : ";
    cin >> tinggi;

    for ( int baris = 1; baris <= tinggi; baris++ ) {
        for ( int kolom = 1; kolom <= baris; kolom++ ) {
            cout << "*";
        }
        cout << "\n";
    }
    
}
