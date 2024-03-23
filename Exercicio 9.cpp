#include <iostream>

using namespace std;

int main() {
    int num;
    int maior, menor;

    cout << "Digite uma serie de numeros (digite 0 para terminar):" << endl;

    cin >> num;
    maior = menor = num;

    while (num != 0) {
        if (num > maior)
            maior = num;
        if (num < menor)
            menor = num;
        cin >> num;
    }

    cout << "O maior numero e: " << maior << endl;
    cout << "O menor numero e: " << menor << endl;

    return 0;
}
