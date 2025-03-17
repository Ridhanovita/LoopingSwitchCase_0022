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

       
    } while (pilihan != 3);
}