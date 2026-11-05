#include <iostream>
#include <string>
using namespace std;

void tampilkanMenu() {
    cout << "\n===== SISTEM UANG KAS KELAS =====" << endl;
    cout << "1. Tambah Uang Kas" << endl;
    cout << "2. Lihat Data Kas" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main() {
    int pilihan;
    int jumlahKas = 0;
    int uang;
    string nama;
    string riwayatKeterangan[100];
    int riwayatNominal[100];
    string riwayattipe[100];
    int jumlahtransaksi=0;

    cout << "Masukkan nama siswa: ";
    cin >> nama;

    do {
        tampilkanMenu();
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan jumlah uang kas: ";
            cin >> uang;

            jumlahKas = jumlahKas + uang;

            cout << "Uang kas berhasil ditambahkan!" << endl;
        }
        else if (pilihan == 2) {
            cout << "Nama siswa: " << nama << endl;
            cout << "Total uang kas: " << jumlahKas << endl;
        }
        else if (pilihan == 3) {
            cout << "Terima kasih!" << endl;
        }
        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }

    } while (pilihan != 3);

    return 0;
}
