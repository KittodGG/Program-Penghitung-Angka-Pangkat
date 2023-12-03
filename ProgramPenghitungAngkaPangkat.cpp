#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    system("cls");

    double angka, pangkat, hasil;
    char pilihan;

    cout << "===========================================" << endl;
    cout << "|| Masukkan angka yang akan di pangkatkan: ";
    cin  >> angka;
    cout << "|| Masukkan pangkat                      : ";
    cin  >> pangkat;
    cout << "===========================================" << endl;

    hasil = pow(angka, pangkat);

    cout << endl;
    cout << "==========================================" << endl;
    cout << "|| " << angka << " pangkat " << pangkat << " = " << hasil << endl;
    cout << "==========================================" << endl;
    cout << endl;

    cout << "Ingin Menghitung Ulang? (Y/N) : ";
    cin  >> pilihan;
    cout << endl;
    if (pilihan == 'Y' || pilihan == 'y')
    {
        main(); // kembali ke awal
    }
    else if (pilihan == 'N' || pilihan == 'n')
    {
        exit(0); // mengakhiri program
    }

    return 0;
}
