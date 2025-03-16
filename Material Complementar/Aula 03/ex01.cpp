#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3;
   
    cout << "Digite a primeira nota e seu peso: ";
    cin >> nota1 >> peso1;

    cout << "Digite a segunda nota e seu peso: ";
    cin >> nota2 >> peso2;
    
    cout << "Digite a terceira nota e seu peso: ";
    cin >> nota3 >> peso3;        

    float media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
    cout << fixed << setprecision(2);
    cout << "Média ponderada: " << media << endl;
    return 0;
}
