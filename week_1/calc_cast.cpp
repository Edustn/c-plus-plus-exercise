#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;

    cin >> a >> b;

    int integerDivision = a / b;
    double floatingDivision = static_cast<double>(a) / b;

    cout << "Valor de a = " << a << endl
         << "Valor de b = " << b << endl;
    cout << "Divisao inteira a / b = " << integerDivision << endl;
    cout << "Divisao em double = " << floatingDivision << endl;

    int bitwiseA = 0b1010;
    int bitwiseB = 0b1100;
    int bitwiseResult = bitwiseA & bitwiseB;
    bool logicalResult = (bitwiseA && bitwiseB);

    cout << "bitwiseA & bitwiseB = " << bitwiseResult << endl;
    cout << "(bitwiseA && bitwiseB) = " << logicalResult << endl;

    {
        int x = 5;
        cout << "Dentro do bloco, x = " << x << '\n';
    }

    cout << "Fora do bloco, x saiu do escopo e nao pode ser usado (descomente a linha abaixo para ver o erro de compilacao)." << endl;
    // cout << x << '\n'; // erro: x was not declared in this scope

    return 0;
}
