#include <iostream>

using namespace std;

int somaNumerosPares(int inicio, int fim) {
    int soma = 0;
    for (int i = inicio; i <= fim; ++i) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int inicio, fim;

    cout << "Digite o inicio do intervalo: ";
    cin >> inicio;

    cout << "Digite o fim do intervalo: ";
    cin >> fim;

    int somaPares = somaNumerosPares(inicio, fim);

    cout << "A soma dos numeros pares no intervalo de " << inicio << " a " << fim << " e: " << somaPares << endl;

    return 0;
}
