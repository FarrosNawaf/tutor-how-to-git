#include <iostream>>
using namespace std;

int main(){
    system("cls");
    int belanja;
    float diskon10 = 0.10;
    float diskon20 = 0.20;

    cout << "===== Kalkulator KAsir Toko Buku =====" << endl;
    cout << "Masukan total belanjaan (Rp): ";
    cin >> belanja;

    cout << "======== Ringkasan Pembayaran ========" << endl;
    if (belanja < 100000){
        cout << "Total bayar\t: " << belanja;
    } else if (belanja >= 100000 && belanja <= 299999){
        int afterDiskon = belanja * diskon10;
        cout << "Diskon (10%)\t: " << afterDiskon;
        cout << endl << "Total bayar\t: " << belanja - afterDiskon;
    } else if (belanja >= 300000){
        int afterDiskon = belanja * diskon20;
        cout << "Diskon (20%)\t: " << afterDiskon;
        cout << endl << "Total bayar\t: " << belanja - afterDiskon;
    }
    
    return 0;
}