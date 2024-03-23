#include <iostream>

using namespace std;

int main() {
    int opcao, num1, num2;
    double resultado;

    cout << "Selecione a operacao:" << endl;
    cout << "1. Adicao" << endl;
    cout << "2. Subtracao" << endl;
    cout << "3. Multiplicacao" << endl;
    cout << "4. Divisao" << endl;
    cin >> opcao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado da adicao: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "Resultado da subtracao: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "Resultado da multiplicacao: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = static_cast<double>(num1) / num2;
                cout << "Resultado da divisao: " << resultado << endl;
            } else {
                cout << "Erro: Divisao por zero" << endl;
            }
            break;
        default:
            cout << "Opcao invalida" << endl;
    }

    return 0;
}
