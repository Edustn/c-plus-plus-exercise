#include <iostream>
#include <iterator> 
using namespace std;

int maxValue(int *valores, int tamanho){
    int max = valores[0];
    for (int i = 1; i < tamanho; i++) {
        if (valores[i] > max) {
            max = valores[i];
        }
    }
    return max;
}

int main(){
    int valores[] = {10, 20, 50, 40, 0};
    cout << "Maior valor: " << maxValue(valores, std::size(valores)) << endl;
    return 0;
}