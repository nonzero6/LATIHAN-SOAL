#include <iostream>
using namespace std;

int main(){
    int jumlah_input;
    cout << "Masukkan banyak input: ";
    cin >> jumlah_input;

    long long total = 0;
    for (int i = 0; i < jumlah_input; i++){
        long long input;
        cout << "Input " << i+1 << ": ";
        cin >> input;
        total += input;
    }

    while (total > 9){
        long long semen = 0;
        while (total > 0){
            semen = total % 10;
            total /= 10;
        }
        total = semen;
    }

    cout << "Hasilnya adalah: " << total << endl;
}