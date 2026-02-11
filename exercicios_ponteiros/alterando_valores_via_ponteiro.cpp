#include <iostream>
using namespace std;

int doubleValue(int *p){
    *p *=2;
    return *p;
}

int main()
{
    int value = 5;
    cout << "Valor original: " << value << endl;
    cout << "Valor dobrado: " << doubleValue(&value) << endl;
    return 0;
}
