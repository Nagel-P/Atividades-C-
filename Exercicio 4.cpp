#include <iostream>

using namespace std;

int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1)
        return 1;
    else
        return numero * calcularFatorial(numero - 1);
}

int main() {
    int num;

    cout << "Digite um numero para calcular o fatorial: ";
    cin >> num;

    cout << "O fatorial de " << num << " e: " << calcularFatorial(num) << endl;

    return 0;
}
