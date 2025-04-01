#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Digite a ordem da matriz (N): ";
    cin >> N;
    int matriz[N][N];

    cout << "Digite a matriz:" << endl;
    for (int i=0; i < N; i++) {
        for (int j=0; j < N; j++) {
            int valor;
            cout << "[" << i << "]" << "[" << j << "]: ";
            cin >> valor;
            matriz[i][j] = valor;
        }
    }
}
