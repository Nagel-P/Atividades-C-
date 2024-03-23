#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra;
    string reversa = "";#include <iostream>
#include <string>

using namespace std;

int contarDigitos(int numero) {#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra;
    string reversa = "";

    cout << "Digite uma palavra: ";
    cin >> palavra;

    // Reverte a string
    for (int i = palavra.length() - 1; i >= 0; --i) {
        reversa += palavra[i];
    }

    cout << "A palavra invertida e: " << reversa << endl;

    return 0;
}

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


    cout << "Digite uma palavra: ";
    cin >> palavra;

    // Reverte a string
    for (int i = palavra.length() - 1; i >= 0; --i) {
        reversa += palavra[i];
    }

    cout << "A palavra invertida e: " << reversa << endl;

    return 0;
}
