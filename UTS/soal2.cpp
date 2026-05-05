#include <iostream> 
#include <cstdlib>
using namespace std;

int main() {
    system("cls"); //clearscreen

    int n; // variabel input user

    // Meminta inputan dari user
    cout << "Input indeks Fibonacci : ";
    cin >> n;

    // Dua angka awal Fibonacci
    int a = 0;
    int b = 1;

    // untuk indeks 0 karna hasilnya ttp nol 
    if (n == 0) {
        cout << "Nilai Fibonacci = 0" << endl;
    }

    // untuk indeks 1 juga hasilnya 1
    else if (n == 1) {
        cout << "Nilai Fibonacci = 1" << endl;
    }

    else {

        int c; // Variabel untuk hasil penjumlahan

        //jadi Perulangannya dimulai dari indeks 2 karna 0 dan 1 sudah ada
        for (int i = 2; i <= n; i++) {

            // Menjumlahkan dua angka sebelumnya
            c = a + b;

            a = b;  // Menggeser nilai a menjadi b
            b = c; // Menggeser nilai b menjadi c
        }

        cout << "Nilai Fibonacci = " << b << endl;  //outputkan hasilnya 
    }
}