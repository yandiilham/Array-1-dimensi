#include <iostream>
using namespace std;

int main()
{
    // deklarasi array
    int angka[5];

    // inisialisasi array
    angka[0] = 15;
    angka[1] = 20;
    angka[2] = 23;
    angka[3] = 6;
    angka[4] = 19;

    // mengakses nilai pada array
    cout << "Nilai pada elemen ke-1 adalah " << angka[0] << endl;
    cout << "Nilai pada elemen ke-2 adalah " << angka[1] << endl;
    cout << "Nilai pada elemen ke-3 adalah " << angka[2] << endl;
    cout << "Nilai pada elemen ke-4 adalah " << angka[3] << endl;
    cout << "Nilai pada elemen ke-5 adalah " << angka[4] << endl;

    return 0;
}