#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool ehPalindromo(string palavra) {
    string reversa = palavra;
    reverse(reversa.begin(), reversa.end());
    return (palavra == reversa);
}

int main() {
    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    if (ehPalindromo(palavra))
        cout << palavra << " e um palindromo." << endl;
    else
        cout << palavra << " nao e um palindromo." << endl;

    return 0;
}
