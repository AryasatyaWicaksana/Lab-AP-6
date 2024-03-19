#include <bits/stdc++.h>
using namespace std;

int main() {
    int pilihan;
    float alas, tinggiAlas, tinggi, luasPermukaan, volume;

    system("CLS");

    cout << "Program Menghitung Luas Permukaan dan Volume Bangun Ruang" << endl;
    cout << "1. Limas Segitiga" << endl;
    cout << "2. Prisma Segitiga" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> pilihan;

    cout << fixed << setprecision(2);

    switch (pilihan) {
        case 1:
            cout << "Masukkan panjang alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi alas segitiga: ";
            cin >> tinggiAlas;
            cout << "Masukkan tinggi limas: ";
            cin >> tinggi;

            luasPermukaan = (0.5 * alas * tinggiAlas) + (3 * 0.5 * alas * tinggi);
            volume = (1.0 / 3) * 0.5 * alas * tinggiAlas * tinggi;

            cout << "Luas permukaan limas: " << luasPermukaan << endl;
            cout << "Volume limas: " << volume << endl;
            break;

        case 2:
            cout << "Masukkan panjang alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi prisma: ";
            cin >> tinggi;

            luasPermukaan = 2 * (0.5 * alas * tinggi) + 3 * alas * tinggi;
            volume = 0.5 * alas * tinggi;

            cout << "Luas permukaan prisma: " << luasPermukaan << endl;
            cout << "Volume prisma: " << volume << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    system("pause");

    return 0;
}
