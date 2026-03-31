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

bool isFibonacci(int n)