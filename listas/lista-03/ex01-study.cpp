// #include <iostream>
// #include <vector>
// #include <algorithm>
//
// using namespace std;
//
// float calcularMedia(const vector<float>& v) {
//     float soma = 0.0;
//     for (float num : v) {
//         soma += num;
//     }
//     return soma / v.size();
// }
//
// float calcularMediana(vector<float>& v) {
//     sort(v.begin(), v.end());
//     int n = v.size();
//     if (n % 2 == 0) {
//         return (v[n / 2 - 1] + v[n / 2]) / 2.0;
//     } else {
//         return v[n / 2];
//     }
// }
//
// float calcularModa(const vector<float>& v) {
//     vector<float> valores = v;
//     sort(valores.begin(), valores.end());
//     float moda = valores[0];
//     int maxFrequencia = 1, frequenciaAtual = 1;
//     for (int i = 1; i < valores.size(); i++) {
//         if (valores[i] == valores[i - 1]) {
//             frequenciaAtual++;
//         } else {
//             if (frequenciaAtual > maxFrequencia) {
//                 maxFrequencia = frequenciaAtual;
//                 moda = valores[i - 1];
//             }
//             frequenciaAtual = 1;
//         }
//     }
//     if (frequenciaAtual > maxFrequencia) {
//         moda = valores[valores.size() - 1];
//     }
//     return moda;
// }
//
// int main() {
//     vector<float> v1, v2, v3;
//     int tamanho;
//
//     for (int i = 0; i < 3; ++i) {
//         cout << "Digite o comprimento do vetor " << i + 1 << " (máximo 10): ";
//         cin >> tamanho;
//         if (tamanho > 10) tamanho = 10;
//
//         vector<float> v(tamanho);
//         cout << "Digite " << tamanho << " elementos para o vetor " << i + 1 << ":\n";
//         for (int j = 0; j < tamanho; ++j) {
//             cin >> v[j];
//         }
//
//         if (i == 0) v1 = v;
//         else if (i == 1) v2 = v;
//         else v3 = v;
//     }
//
//     cout << "\nVetor 1\n";
//     cout << "Média: " << calcularMedia(v1) << "\n";
//     cout << "Mediana: " << calcularMediana(v1) << "\n";
//     cout << "Moda: " << calcularModa(v1) << "\n";
//
//     cout << "\nVetor 2\n";
//     cout << "Média: " << calcularMedia(v2) << "\n";
//     cout << "Mediana: " << calcularMediana(v2) << "\n";
//     cout << "Moda: " << calcularModa(v2) << "\n";
//
//     cout << "\nVetor 3\n";
//     cout << "Média: " << calcularMedia(v3) << "\n";
//     cout << "Mediana: " << calcularMediana(v3) << "\n";
//     cout << "Moda: " << calcularModa(v3) << "\n";
//
//     return 0;
// }
//
