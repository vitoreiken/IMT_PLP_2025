#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;
    int contVogais = 0;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    for (char c : frase) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contVogais++;
        }
    }
    cout << "A frase contém " << contVogais << " vogais." << endl;

    return 0;
}
