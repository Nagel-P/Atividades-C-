#include <iostream>
#include <string>

using namespace std;

int contarDigitos(int numero) {
    int contagem = 0;
    if (numero < 0)
        numero *= -1;
    while (numero != 0) {
        numero /= 10;
        ++contagem;
    }
    return contagem;
}

int main() {
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << "O numero de digitos em " << num << " e: " << contarDigitos(num) << endl;

    return 0;
}
