#include <iostream>

using namespace std;

int main() {
    int numero1, numero2, numero3;
    double media;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "Digite o terceiro numero: ";
    cin >> numero3;

    media = (numero1 + numero2 + numero3) / 3.0;

    cout << "A media dos numeros e: " << media << endl;

    return 0;
}
