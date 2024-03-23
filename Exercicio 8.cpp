#include <iostream>

using namespace std;

double calcularMediaPonderada(double notas[], double pesos[], int tamanho) {
    double somaNotas = 0, somaPesos = 0;
    for (int i = 0; i < tamanho; ++i) {
        somaNotas += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }
    return somaNotas / somaPesos;
}

int main() {
    int numAvaliacoes;

    cout << "Quantas avaliacoes voce deseja calcular a media ponderada? ";
    cin >> numAvaliacoes;

    double notas[numAvaliacoes], pesos[numAvaliacoes];

    // Solicita as notas e os pesos das avaliacoes
    for (int i = 0; i < numAvaliacoes; ++i) {
        cout << "Digite a nota da avaliacao " << i + 1 << ": ";
        cin >> notas[i];
        cout << "Digite o peso da avaliacao " << i + 1 << ": ";
        cin >> pesos[i];
    }

    // Calcula e exibe a media ponderada
    double media = calcularMediaPonderada(notas, pesos, numAvaliacoes);
    cout << "A media ponderada das avaliacoes e: " << media << endl;

    return 0;
}
