#include <iostream>
#include <string>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData() {
        cout << "Nama             : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
};

int main() {
    Barang elektronik;
    elektronik.nama = "Ipad Mini";
    elektronik.jumlah = 20;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "19-03-2025";

    Barang nonElektronik;
    nonElektronik.nama = "Binder";
    nonElektronik.jumlah = 100;
    nonElektronik.kategori = "Alat Tulis";
    nonElektronik.tanggalProduksi = "08-08-2024";

    cout << "--- Data Barang Elektronik ---" << endl;
    elektronik.printData();

    cout << "\n--- Data Barang Non-Elektronik ---" << endl;
    nonElektronik.printData();
}