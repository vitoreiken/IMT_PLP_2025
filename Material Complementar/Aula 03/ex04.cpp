#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double celsius, fahrenheit, kelvin;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    cout << fixed << setprecision(2);
    cout << "Em Fahrenheit: " << fahrenheit << endl;
    cout << "Em Kelvin: " << kelvin << endl;

    return 0;
}
