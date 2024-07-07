#include <iostream>

using namespace std;

int main(){
    cout << "Enter A and B: \n";
    double a, b;
    cin >> a >> b;
    cout << a << ' ' << b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
    cout << "min of a, b = " << min(a, b) << '\n';
    return 0;
}