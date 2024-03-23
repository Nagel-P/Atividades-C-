#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int termo;

    cout << "Digite o termo da sequencia de Fibonacci que deseja calcular: ";
    cin >> termo;

    cout << "O " << termo << "o termo da sequencia de Fibonacci e: " << fibonacci(termo) << endl;

    return 0;
}
