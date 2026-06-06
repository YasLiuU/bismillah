#include <iostream>
using namespace std;

int main() {

    int angka[7];
    int jumlah = 0;

    for(int i = 0; i < 7; i++) {

        cout << "Input angka ke-" << i+1 << ": ";
        cin >> angka[i];

         jumlah = jumlah + angka[i];
    }

    cout << endl;

    for(int i = 0; i < 7; i++) {

        cout << "Isi array: " << angka[i] << endl;

    }

    cout << "=================" <<endl;
    
    //jumlah isi array di atas
   cout << "Jumlah total array: " << jumlah;

   
}