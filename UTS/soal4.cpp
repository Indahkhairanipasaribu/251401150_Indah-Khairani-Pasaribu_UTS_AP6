#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");  //clearscreen

    int angka; // deklarasi  variabel untuk inputan

    cout << "Masukkan angka : ";
    cin >> angka;

    int asli = angka; // Menyimpan nilai asli
    int temp = angka; // Variabel temp -> var ini yang nilainya di otak atik


    int jumlahDigit = 0; //deklarasi nilai awal jumlah digit

    while (temp > 0 ) {      // Menghitung digit
        jumlahDigit++;      // jumlah digit = 1

        temp = temp / 10;
    }

    temp = angka; // Reset temp -> temp adalah angka (nilai yg ada pda angka)

    // Proses setiap digit
    int hasil = 0; // Menyimpan total hasil perpangkatan -> nilai awalnya 0
    while (temp > 0) {

        int digit = temp % 10; // Mengambil digit terakhir

        int pangkat = 1;

        // Menghitung perpangkatan manual
        for (int i = 0; i < jumlahDigit; i++) {

            pangkat = pangkat * digit;
        }

        hasil = hasil + pangkat;  // Menambahkan ke total

        cout << digit;  // Menampilkan proses perhitungan

        // Menampilkan perkalian sebanyak jumlah digit
        for (int i = 0; i < jumlahDigit; i++) {

            cout << "*" << digit;
        }

        // Kalau bukan digit terakhir, tampilkan +
        if (temp >= 10) {
            cout << " + ";
        }

        // Menghapus digit terakhir
        temp = temp / 10;
    }

    cout << " = " << hasil << endl;

    // Cek Armstrong atau bukan untuk meng-outputkan 
    if (hasil == asli) {

        cout << "YES, " << asli
             << " is an Armstrong Number";
    }
    else {

        cout << "NO, " << asli
             << " is not an Armstrong Number";
    }

}