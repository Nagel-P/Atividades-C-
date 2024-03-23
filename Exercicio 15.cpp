#include <iostream>
#include <stack>

using namespace std;

string decimalParaBinario(int numero) {
    stack<int> binario;

    // Converte o número decimal para binário
    while (numero != 0) {
        binario.push(numero % 2);
        numero /= 2;
    }

    // Constrói a representação binária como uma string
    string binarioString = "";
    while (!binario.empty()) {
        binarioString += to_string(binario.top());
        binario.pop();
    }

    return binarioString;
}

int main() {
    int numero;

    cout << "Digite um numero decimal: ";
    cin >> numero;

    cout << "O numero binario correspondente e: " << decimalParaBinario(numero) << endl;

    return 0;
}
