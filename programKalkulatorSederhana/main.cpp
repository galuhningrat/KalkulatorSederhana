#include <iostream>

int main() {
    char pilihan;

    do {
        std::cout << "PROGRAM KALKULATOR SEDERHANA" << std::endl;

        // Menginput bilangan pertama
        std::cout << "Masukkan bilangan pertama: " << std::endl;
        double bilanganPertama;
        std::cin >> bilanganPertama;

        // Menginput bilangan kedua
        std::cout << "Masukkan bilangan kedua: " << std::endl;
        double bilanganKedua;
        std::cin >> bilanganKedua;

        // Menginput operator
        std::cout << "Masukkan operator (+, -, *, /): " << std::endl;
        char operasi;
        std::cin >> operasi;

        // Menghitung hasil berdasarkan operasi yang dipilih
        double hasil;

        if (operasi == '+') {
            hasil = bilanganPertama + bilanganKedua;
            std::cout << "Hasil: " << bilanganPertama << " + " << bilanganKedua << " = " << hasil << std::endl;
        } else if (operasi == '-') {
            hasil = bilanganPertama - bilanganKedua;
            std::cout << "Hasil: " << bilanganPertama << " - " << bilanganKedua << " = " << hasil << std::endl;
        } else if (operasi == '*') {
            hasil = bilanganPertama * bilanganKedua;
            std::cout << "Hasil: " << bilanganPertama << " * " << bilanganKedua << " = " << hasil << std::endl;
        } else if (operasi == '/') {
            if (bilanganKedua != 0) {
                hasil = bilanganPertama / bilanganKedua;
                std::cout << "Hasil: " << bilanganPertama << " / " << bilanganKedua << " = " << hasil << std::endl;
            } else {
                std::cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << std::endl;
            }
        } else {
            std::cout << "Operator tidak valid!" << std::endl;
        }

        // Menanyakan kepada pengguna apakah ingin kembali ke menu
        std::cout << "Apakah Anda ingin melakukan perhitungan lagi? (y/n): ";
        std::cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    std::cout << "Terima kasih telah menggunakan kalkulator!" << std::endl;
    return 0;
}
