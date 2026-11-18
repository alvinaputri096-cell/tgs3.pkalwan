#include <iostream>
#include <string>
using namespace std;

// Fungsi menampilkan menu
void tampilMenu(string menu[], int harga[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << menu[i]
             << " - Rp" << harga[i] << endl;
    }
}

// Fungsi menghitung total
int hitungTotal(int harga[], int jumlah[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += harga[i] * jumlah[i];
    }

    return total;
}

int main() {
    string makanan[3] = {"Soto", "Rawon", "Pecel"};
    int hargaMakan[3] = {15000, 20000, 10000};

    string minuman[2] = {"Teh", "Kopi"};
    int hargaMinum[2] = {3000, 5000};

    int porsi[3], jumlahMinum[2];
    int totalMakan, totalMinum, total;
    char ulang;

    do {
        cout << "\n=== DAFTAR MAKANAN ===\n";
        tampilMenu(makanan, hargaMakan, 3);

        for (int i = 0; i < 3; i++) {
            cout << "Jumlah " << makanan[i] << ": ";
            cin >> porsi[i];
        }

        cout << "\n=== DAFTAR MINUMAN ===\n";
        tampilMenu(minuman, hargaMinum, 2);

        for (int i = 0; i < 2; i++) {
            cout << "Jumlah " << minuman[i] << ": ";
            cin >> jumlahMinum[i];
        }

        totalMakan = hitungTotal(hargaMakan, porsi, 3);
        totalMinum = hitungTotal(hargaMinum, jumlahMinum, 2);

        total = totalMakan + totalMinum;

        cout << "\n=== STRUK PEMBAYARAN ===\n";
        cout << "Total makanan : Rp" << totalMakan << endl;
        cout << "Total minuman : Rp" << totalMinum << endl;
        cout << "Total bayar   : Rp" << total << endl;

        cout << "\nPesan lagi? (y/t): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih sudah memesan!" << endl;

    return 0;
}
