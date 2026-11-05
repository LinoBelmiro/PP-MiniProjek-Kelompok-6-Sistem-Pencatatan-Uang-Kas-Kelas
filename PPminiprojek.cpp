#include <iostream>
#include <string>
using namespace std;

void tampilkanMenu() {
    cout << "\n===== SISTEM UANG KAS KELAS =====" << endl;
    cout << "1. Tambah Uang Kas" << endl;
    cout << "2. Lihat Data Kas" << endl;
    cout << "3. Catat Pengeluaran Kas" << endl; 
    cout << "4. Lihat Riwayat Transaksi" << endl; 
    cout << "5. Keluar" << endl; 
    cout << "Pilih menu: ";
}

int main() {
    int pilihan;
    int jumlahKas = 0;
    int uang;
    string nama;
    string riwayatKeterangan[100];
    int riwayatNominal[100];
    string riwayatTipe[100];
    int jumlahTransaksi=0;
    int pengeluaran;
    string keterangan;
    string riwayatTanggal[100];
    string tanggal;

    cout << "Masukkan nama siswa: ";
    cin >> nama;

    do {
        tampilkanMenu();
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan jumlah uang kas: ";
            cin >> uang;
            cout << "Masukkan tanggal (HH/BB/TTTT): ";
            cin >> tanggal;

            jumlahKas = jumlahKas + uang;
            riwayatKeterangan[jumlahTransaksi] = "Pemasukan dari " + nama; 
            riwayatNominal[jumlahTransaksi] = uang;
            riwayatTipe[jumlahTransaksi] = "+";
            riwayatTanggal[jumlahTransaksi] = tanggal;
            jumlahTransaksi++; 

            cout << "Uang kas berhasil ditambahkan!" << endl;
        }
        else if (pilihan == 2) {
            cout << "Nama siswa: " << nama << endl;
            cout << "Total uang kas: " << jumlahKas << endl;
        }  
        else if (pilihan == 3) {
            cout << "Masukkan jumlah pengeluaran: ";
            cin >> pengeluaran;
            if (jumlahKas >= pengeluaran) {
                cout << "Masukkan tanggal (HH/BB/TTTT): ";
                cin >> tanggal;
                cout << "Masukkan keterangan pengeluaran: ";
                cin.ignore();
                getline(cin, keterangan);
                jumlahKas = jumlahKas - pengeluaran;
                riwayatKeterangan[jumlahTransaksi] = keterangan;
                riwayatNominal[jumlahTransaksi] = pengeluaran;
                riwayatTipe[jumlahTransaksi] = "-";
                riwayatTanggal[jumlahTransaksi] = tanggal;
                jumlahTransaksi++;
                cout << "Pengeluaran berhasil dicatat!" << endl;
            } else {
                cout << "Saldo uang kas tidak cukup!" << endl;
            }
        }
        else if (pilihan == 4) {
            cout << "\n--- Riwayat Transaksi ---" << endl;
            if (jumlahTransaksi == 0) {
                cout << "Belum ada transaksi." << endl;
                } else {
                for (int i = 0; i < jumlahTransaksi; i++) {
                    cout << i + 1 << ". [" << riwayatTanggal[i] << "] [" << riwayatTipe[i] << "] Rp" << riwayatNominal[i] << " - " << riwayatKeterangan[i] << endl;
                }
            }
        }            
        else if (pilihan == 5) {
            cout << "Terima kasih!" << endl;
        }
        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }

    } while (pilihan != 5);

    return 0;
}
