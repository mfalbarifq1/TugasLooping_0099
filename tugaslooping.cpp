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