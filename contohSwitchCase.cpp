#include <iostream>
using namespace std;

float luasPersegiPanjang(float a, float b)
{
    return a * b;
}

float luasLingkaran(float a)
{
    return 3.14 * a * a;
}

int main()
{
    int pilihan;
    float panjang, lebar;
    float jejari;

    do
    {
        cout << "Menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;

        cout << "Pilihlah antara 1/2/3 = ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Hitung luas persegi panjang" << endl;
            cout << "Masukkan panjang =";
            cin >> panjang;
            cout << "Masukkan lebar =";
            cin >> lebar;
            cout << "Luas persegi panjang =" << luasPersegiPanjang(panjang, lebar) << endl;
            break;
        case 2:
            cout << "Hitung luas lingkaran" << endl;
            cout << "Masukan jari-jari =";
            cin >> jejari;
            cout << "Luas lingkaran =" << luasLingkaran(jejari) << endl;
            break;
        case 3:
            break;
        default:
            cout << "Pilihan salah, pilihlah salah satu diantara 1-3";
            break;
        }
       
    } while (pilihan != 3);
}