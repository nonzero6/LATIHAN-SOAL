#include <iostream>
#include <vector>
using namespace std;

int main(){
    int M, n;
    cin >> M >> n;
    vector<int> a(M);
    for (int i = 0; i < M; i++){
        cin >> a[i];
    }

    for (int i = 0; i < M; i++) {
        if (a[i] == -1) {
            int sum = 0;
            int count = 0;

            for (int L = 1; L <= n; L++) {
                int idx = i - L;
                if (idx < 0) break;
                if (a[idx] == -1) continue;
                sum += a[idx];
                count++;
            }

            for (int R = 1; R <= n; R++) {
                int idx = i + R;
                if (idx >= M) break;
                if (a[idx] == -1) continue;
                sum += a[idx];
                count++;
            }

            if (count > 0) {
                a[i] = sum / count;
            } else {
                a[i] = 0;
            }
            
        }
    }

    // cetak output
    for (int i = 0; i < M; i++) {
        cout << a[i];
        if (i < M - 1) cout << " ";
    } 
    cout << endl;
}