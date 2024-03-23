#include <iostream>

using namespace std;

double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperatura;
    int escolha;

    cout << "Escolha a conversao desejada:" << endl;
    cout << "1. Celsius para Fahrenheit" << endl;
    cout << "2. Fahrenheit para Celsius" << endl;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Digite a temperatura em Celsius: ";
            cin >> temperatura;
            cout << "A temperatura em Fahrenheit e: " << celsiusParaFahrenheit(temperatura) << endl;
            break;
        case 2:
            cout << "Digite a temperatura em Fahrenheit: ";
            cin >> temperatura;
            cout << "A temperatura em Celsius e: " << fahrenheitParaCelsius(temperatura) << endl;
            break;
        default:
            cout << "Escolha invalida!" << endl;
    }

    return 0;
}
