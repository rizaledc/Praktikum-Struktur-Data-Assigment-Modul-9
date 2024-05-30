#include <iostream>

// Deklarasi kedua fungsi terlebih dahulu
long long faktorialGenap(int n);
long long faktorialGanjil(int n);

// Fungsi untuk menghitung faktorial bilangan genap
long long faktorialGenap(int n) {
    if (n == 0) 
        return 1; // basis rekursi
    else
        return n * faktorialGanjil(n - 1); // memanggil fungsi faktorialGanjil
}

// Fungsi untuk menghitung faktorial bilangan ganjil
long long faktorialGanjil(int n) {
    if (n == 1) 
        return 1; // basis rekursi
    else
        return n * faktorialGenap(n - 1); // memanggil fungsi faktorialGenap
}

int main() {
    int angka;
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> angka;

    // Memastikan bahwa angka adalah positif
    if (angka < 0) {
        std::cout << "Faktorial tidak didefinisikan untuk bilangan negatif." << std::endl;
    } else {
        long long hasil;
        if (angka % 2 == 0) {
            hasil = faktorialGenap(angka);
        } else {
            hasil = faktorialGanjil(angka);
        }
        std::cout << "Hasil Faktorial dari " << angka << " adalah: " << hasil << std::endl;
    }

    return 0;
}
