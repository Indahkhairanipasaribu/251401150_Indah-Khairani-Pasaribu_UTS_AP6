#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls"); //clear screen

    int angka[5];  // Array untuk menyimpan 5 angka

    cout << "Masukkan 5 angka : ";  // Meminta user Input 5 angka

    for (int i = 0; i < 5; i++) {     // Loop untuk inputan array tadi
        cin >> angka[i];
    }

    cout << "Hasil reverse : ";  // Menampilkan hasil reverse

    for (int i = 4; i >= 0; i--) {    // Loop dari belakang ke depan
        cout << angka[i] << " ";
    }
    
}