#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls"); //clearscreen

    int a, b; // deklarasi variabel

    cout << "Input dua angka : "; // Meminta user memasukkan dua angka
    cin >> a >> b;


    int x = a; // menyimpan nilai awal 
    int y = b;

    // Algoritma Euclidean
    // Selama y belum 0, prosesnya akan terus dilanjutkan.
    while (y != 0) {
        int sisa = x % y; // Menyimpan sisa hasil bagi x dibagi y

        x = y;  // Memindahkan nilai y ke x
        y = sisa;  // Memasukkan sisa ke y
    }

    cout << "FPB = " << x << endl; //hasil akhirnya ditampilkan 

}
