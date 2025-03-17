#include <iostream>
using namespace std;

int main()
{
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    //perulangan dengan for

    cout << "perulangan pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir =" << n << endl;
    cout << endl;

    cout << "Perulangan for pencacah turun" << endl;
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n =" << n << "Selamat datang" << endl;
    }
    cout << "Nilai n terakhir =" << n;
    cout << endl;

}