#include <iostream>

using namespace std;

constexpr int square(int x) {
    return x * x;
}

int main() {
    int i = 10;
    double d = 3.14;

    auto x = i;
    auto y = d;

    decltype(i) j = i;

    constexpr int v = square(5);

    cout << "i = " << i << ", sizeof(i) = " << sizeof(i) << endl;
    cout << "d = " << d << ", sizeof(d) = " << sizeof(d) << endl;
    cout << "x = " << x << ", sizeof(x) = " << sizeof(x) << endl;
    cout << "y = " << y << ", sizeof(y) = " << sizeof(y) << endl;
    cout << "j = " << j << ", sizeof(j) = " << sizeof(j) << endl;
    cout << "square(n) = " << v << ", sizeof(v) = " << sizeof(v) << endl;
    
    return 0;
}
