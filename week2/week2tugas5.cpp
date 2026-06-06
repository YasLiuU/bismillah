#include <iostream>
using namespace std;

int main() {

    int angka[5];

    for(int i = 0; i < 5; i++) {

        cout << "Input angka ke-" << i+1 << ": ";
        cin >> angka[i];

    }

    int terbesar = angka[0];

    for(int i = 1; i < 5; i++) {

        if(angka[i] > terbesar) {
            terbesar = angka[i];
        }

    }

    cout << "Nilai terbesar = " << terbesar;

}