#include <iostream>
using namespace std;

struct siswa {
    string nama;
    int nilai;
    string status;
};

int main() {
    int jumlah;
    cout << "Masukan Jumlah Siswa: ";
    cin >> jumlah;
    cin.ignore();

    siswa siswa[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "\nSiswa ke-" << i + 1 << endl;

        cout << "Nama: ";
        getline(cin, siswa[i].nama);

        cout << "Nilai Akhir: ";
        cin >> siswa[i].nilai;
        cin.ignore();

        if (siswa[i].nilai >= 75) {
            siswa[i].status = "Lulus";
        } else {
            siswa[i].status = "Tidak Lulus";
        }
    }

    cout << "\n==== DATA NILAI SISWA ====";

    for (int i = 0; i < jumlah; i++) {
        cout << "\nNama : " << siswa[i].nama << endl;
        cout << "Nilai : " << siswa[i].nilai << endl;
        cout << "Status : " << siswa[i].status << endl;
    }


    return 0;
}