#include <iostream>
using namespace std;

int main(){
    system("cls");
    int radius;
    int tinggi;
    float phi = 3.14;

    cout << "Masukan radius: ";
    cin >> radius;
    cout << "Masukan tinggi:  ";
    cin >> tinggi;

    float luasAlas = phi*radius*radius;
    float volume = luasAlas*tinggi/3;
    cout << endl << "Luas Alas Kerucut: " << luasAlas << endl;
    cout << "Volume Kerucut: " << volume;
}