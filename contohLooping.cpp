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

    //perulangan dengan while
    cout << "perulangan while" << endl;

    srand(time(0));
    n = rand() % 10;

    cout << "Nilai awal n =" << n << endl;

    while (n < 7)
    {
        cout << "Nilai n =" << n << endl;
        n = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah perulangan = " << perulanganWhile << endl;
    cout << "Nilai n terakhir = " << n << endl;

    //perulangan dengan do while
    cout << "Perulangan do while" << endl;

    srand(time(0));
    n = rand () % 10;

    cout << "Nilai awal n =" << n << endl;

    do
    {
        cout << "Nilai n =" << n << endl;
        n = rand() %10;
        perulanganDo++;
    } while (n < 7);
    cout << "Jumlh perulangan = " << perulanganWhile << endl;
    cout << "Nilai n terakhir = " << n << endl;
}