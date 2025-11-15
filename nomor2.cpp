#include <iostream>
using namespace std;

int main() {
    string M, S;
    cin >> M;
    cin >> S;

    char removeChar = S[0];

    char lowerRemove = tolower(removeChar);
    char upperRemove = toupper(removeChar);

    string hasil = "";

    for (int i = 0; i < M.length(); i++) {
        if (M[i] != lowerRemove && M[i] != upperRemove) {
            hasil += M[i];
        }
    }

    cout << hasil << endl;
    cout << lowerRemove << endl;
    return 0;
}
