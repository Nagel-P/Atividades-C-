#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool ehVogal(char caractere) {
    caractere = tolower(caractere); // Converte o caractere para minúsculo
    return (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u');
}

void contarVogaisConsoantes(string palavra, int& vogais, int& consoantes) {
    vogais = consoantes = 0;
    for (char c : palavra) {
        if (isalpha(c)) {
            if (ehVogal(c))
                ++vogais;
            else
                ++consoantes;
        }
    }
}

int main() {
    string palavra;
    int vogais, consoantes;

    cout << "Digite uma palavra ou frase: ";
    getline(cin, palavra);

    contarVogaisConsoantes(palavra, vogais, consoantes);

    cout << "Numero de vogais: " << vogais << endl;
    cout << "Numero de consoantes: " << consoantes << endl;

    return 0;
}
