#include <iostream>
using namespace std;

// Variabel global
int angka;
int pilihan;

bool isPrima(int n){
    if (n <= 1) return false;
     int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;

}

bool isFibonacci(int n){
    int a = 0, b = 1, c = 0;

    while (c <= n) {
        if (c == n) {
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

void inputAngka(){
    cout << "Masukkan angka: ";
    cin >> angka;
}

void tampilHasilPrima(){
    if (isPrima(angka)) {
        cout << angka << " adalah bilangan prima.\n";
    } else {
        cout << angka << " bukan bilangan prima.\n";
    }
}

void tampilHasilFibonacci(){
    if (isFibonacci(angka)) {
        cout << angka << " termasuk bilangan Fibonacci.\n";
    } else {
        cout << angka << " bukan bilangan Fibonacci.\n";
    }
}

void menu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}

int main() {
    while (true) {
        menu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilHasilPrima();
                break;

            case 2:
                inputAngka();
                tampilHasilFibonacci();
                break;

            case 0:
                cout << "Program selesai.\n";
                return 0;

            default:
                cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}

