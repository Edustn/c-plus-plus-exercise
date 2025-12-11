#include <iostream>
using namespace std;


void changeValues(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}


int main()
{
    int a = 10;
    int b = 20;
    changeValues(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
    return 0;

}