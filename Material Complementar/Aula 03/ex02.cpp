#include <iostream>

using namespace std;
int main() {
    int num;
    cout << "Digite um número inteiro positivo: ";
    cin >> num;

    bool ehPrimo = true;

    if (num <= 1) {
        ehPrimo = false;
    }
    else {
        for (int i=2; i < num; i++) {
            if (num % i == 0) {
                ehPrimo = false;
                break;
            }
        }
    }

    if (ehPrimo) {
        cout << "O número " << num << " é primo." << endl;
    }
    else {
        cout << "O número " << num << " não é primo." << endl;
    }

    return 0;
}
