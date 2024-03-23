#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int num, opcao;
    vector<int> numeros;

    cout << "Quantos numeros deseja ordenar? ";
    cin >> num;

    cout << "Digite os numeros:" << endl;
    for (int i = 0; i < num; ++i) {
        int temp;
        cin >> temp;
        numeros.push_back(temp);
    }

    cout << "Escolha a ordem de ordenacao:" << endl;
    cout << "1. Crescente" << endl;
    cout << "2. Decrescente" << endl;
    cin >> opcao;

    if (opcao == 1)
        sort(numeros.begin(), numeros.end());
    else if (opcao == 2)
        sort(numeros.begin(), numeros.end(), greater<int>());

    cout << "Numeros ordenados:" << endl;
    for (int i = 0; i < num; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
