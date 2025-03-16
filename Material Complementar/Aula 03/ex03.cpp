#include <iostream>

using namespace std;

int main() {
    int num;
    unsigned long long fatorial = 1;
    cout << "Digite um número inteiro positivo: ";
    cin >> num;
    
    if (num < 0) {
        cout << "O fatorial não é definido para números negativos." << endl;
    }
    else {
        for (int i=1; i <= num; i++) {
           fatorial *= i;
           /*cout << fatorial << endl;*/
        }

        cout << "O fatorial de " << num << " é: " << fatorial << endl;
    }
}
