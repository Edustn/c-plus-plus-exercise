#include <iostream>
#include <iterator> 

using namespace std;

int soma(int *valores, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) 
        soma += valores[i];
    return soma;
}

int main() {
    int valores[] = {10, 20, 30, 40, 50};
    cout << "Soma: " << soma(valores, std::size(valores)) << endl;
    return 0;
}