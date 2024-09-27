#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int JUMLAH_SALESMEN = 10;
    double penjualan[JUMLAH_SALESMEN];
    double komisi[JUMLAH_SALESMEN];
    double totalKomisi = 0;


    cout<<setprecision(12);
    for (int i = 0; i < JUMLAH_SALESMEN; ++i) {
        cout << "Masukkan penjualan salesman ke " << i + 1 << ": Rp ";
        cin >> penjualan[i];

        if (penjualan[i] <= 500000) {
            komisi[i] = 0.10 * penjualan[i];
        } else {
            komisi[i] = 0.10 * 500000 + 0.15 * (penjualan[i] - 500000);
        }

        totalKomisi += komisi[i];
        cin.ignore();
    }


    cout << "Komisi per salesman:" << endl;
    for (int i = 0; i < JUMLAH_SALESMEN; ++i) {
        cout << "Salesman ke " << i + 1 << ": Rp " << komisi[i] << endl;
        cin.ignore();
    }

    cout << "Total komisi yang dibayarkan oleh perusahaan adalah : Rp " << totalKomisi << endl;

    return 0;
}

