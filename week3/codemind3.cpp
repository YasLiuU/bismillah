#include <iostream>
using namespace std;

int kuadrat(int x){
    return x * x;
}

int main(){

    int hasil = kuadrat(2) + kuadrat(3);

    cout << hasil;

    return 0;
}
