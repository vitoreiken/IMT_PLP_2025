#include <iostream>

using namespace std;

int sacar(int valor_saque) {
    int duzentos = valor_saque / 200;
    valor_saque -= 200 * duzentos;
    int cinquenta = valor_saque / 50;
    valor_saque -= 50 * cinquenta;
    int cinco = valor_saque / 5;
    valor_saque -= 5 * cinco;
    int um = valor_saque / 1;
    valor_saque -= 1 * um;
    
    cout << endl;
    if (duzentos > 0) {
        cout << duzentos << " nota(s) de duzentos." << endl;
    }
    if (cinquenta > 0) {
        cout << cinquenta << " nota(s) de cinquenta." << endl;
    }
    if (cinco > 0) {
        cout << cinco << " nota(s) de cinco." << endl;
    }
    if (um > 0) {
        cout << um << " nota(s) de um." << endl;
    }

    return 0;
}

int main() {
    int valor_saque;
    cout << "Digite o valor do saque (de 15 a 500): ";
    cin >> valor_saque;
    bool saqueFeito = false;
    
    while (!saqueFeito){
        if (valor_saque < 15 || valor_saque > 500) {
            cout << "Digite um valor válido para saque (de 15 a 500): ";
            cin >> valor_saque;
            saqueFeito = false;
        }
        else {
            sacar(valor_saque);
            cout << "\nSaque realizado com sucesso!\n";
            saqueFeito = true;
        }
    }

    return 0;
}
