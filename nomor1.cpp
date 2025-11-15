#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int X;
    cout << "Masukkan jumlah lapangan: ";
    cin >> X;

    double total = 0;

    for (int i = 0; i < X; i++){
        int M,N;
        cout << "Masukkan Lebar dan panjang: ";
        cin >> M >> N;
        total += (M * N);
    }

    int T;
    cout << "Masukkan jumlah teman: "; 
    cin >> T;

    double hasil = 0;
    hasil = total/T;

    cout << fixed << setprecision(2) << hasil << endl;
}