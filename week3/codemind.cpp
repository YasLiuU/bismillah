#include <iostream>
using namespace std;

void nama(string nama, int umur, string alamat) {
    cout << "Nama saya: " << nama
         << " dan umur saya: " << umur
         << " tahun, alamat saya di: "
         << alamat << endl;
}

int main() {
    nama("Iyas", 20, "Tangerang");
    nama("Alif", 20, "Tangerang");
    nama("Asep", 19, "Jakarta");

    return 0;
}