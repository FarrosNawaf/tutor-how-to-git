#include <iostream>
using namespace std;

int main(){
    system("cls");
    int pilihan;
    int uang;
    int harga;

    cout << "=========== VENDING MESINN ===========" << endl;
    cout << "Pilihan minuman: " << endl;
    cout << "1. Air mineral (Rp 4.000)" << endl;
    cout << "2. Teh Botol (Rp 6.000)" << endl;
    cout << "3. Kopi susu (Rp 10.000)" << endl;
    cout << "======================================" << endl;
    cout << "Pilih minuman (1-3): ";
    cin >> pilihan;

    switch (pilihan){
    case 1:
        harga = 4000;
        break;
    case 2:
        harga = 6000;
        break;
    case 3:
        harga = 10000;
        break;
    default:
        cout << "Kode minuman tidak valid!";
        return 0;
    }

    cout << "Masukan nominal uang anda: Rp ";
    cin >> uang;
    cout << "========== Detail Transaksi ==========" << endl;

    if (uang < harga){
        int kurang = harga - uang;
        cout << "Transaksi Gagal! Uang anda kurang Rp " << kurang;
    } else if (uang == harga) {
        cout << "Transaksi Berhasil! Uang anda pas tidak ada kembalian";
    } else {
        int kembalian = uang - harga;
        cout << "Transaksi Berhasil! Kemabalian anda Rp " << kembalian << endl;

        int lembar5k = kembalian / 5000;
        int sisaSatuRibu = kembalian % 5000;
        int lembar1k = sisaSatuRibu / 1000;

        cout << "Pecahan kembalian:" << endl;
        cout << "- Lembaran Rp 5.000 : " << lembar5k << " lembar" << endl;
        cout << "- Lembaran Rp 1.000 : " << lembar1k << " lembar" << endl;
    }

    return 0;
}