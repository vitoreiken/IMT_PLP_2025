#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int mes) {
    vector<int> sequencia = {1, 1};

    for(int i=0; i < mes; i++) {
        int prox_num = sequencia[i] + sequencia[i+1];
        sequencia.push_back(prox_num);
    }

    return sequencia[mes-1];
}

int main() {
    int mes;
    cout << "Digite o número do mês: ";
    cin >> mes;
    cout << "O valor investido no mês " << mes << " será: " << fibonacci(mes) << endl;

    return 0;
}
