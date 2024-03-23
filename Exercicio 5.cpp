#include <iostream>

using namespace std;

bool verificarPrimo(int numero) {
    if (numero <= 1)
        return false;
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;

    cout << "Digite um numero para verificar se e primo: ";
    cin >> num;

    if (verificarPrimo(num))
        cout << num << " e um numero primo." << endl;
    else
        cout << num << " nao e um numero primo." << endl;

    return 0;
}
