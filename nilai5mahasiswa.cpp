#include <iostream>
using namespace std;

int main() {
    int nilai[5];
    int jumlah = 0;


    for( int i = 0; i < 5; i++){
        cout<<"Nilai ke= "<<i+1<<" : ";
        cin>>nilai[i];
    jumlah = jumlah + nilai[i];
        
    }

    for( int i = 0; i < 5; i++){
        cout<<" Nilai: "<<nilai[i]<<endl;

    }
    cout<<"==========="<<endl;
    cout<<"Rata-rata: "<< jumlah / 5 ;



}