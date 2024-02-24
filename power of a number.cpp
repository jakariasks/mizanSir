#include <bits/stdc++.h>
using namespace std;
long long int PowerofNumber(int base, int ex) {

    if (ex == 0) {
        return 1.0;
    }
    return base * PowerofNumber(base, ex - 1);
}

int main() {

    int base,exponent;
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    long long int result = PowerofNumber(base, exponent);
    cout << base << " ^ " << exponent << " = " << result << endl;
    return 0;
}
