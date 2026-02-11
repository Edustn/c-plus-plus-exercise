#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p;

    **pp = 100;
    cout << a << endl;

}