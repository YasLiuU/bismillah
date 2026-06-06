#include <iostream>
using namespace std;

string tambah(int a, int b)
{
    return to_string(a+b);
}

int main()
{
    //untuk input nilai dari parameter a dan b
    string a, b;
    cout<<"Masukan nilai a: ";
    cin>> a;
    cout<<"Masukan nilai b: ";
    cin>> b;
    cout<<" Hasil penjumlahan: "<< tambah(stoi(a), stoi(b))<<endl;
    return 0;
}