#include<bits/stdc++.h>
using namespace std;

int nthfibonacci(int n)
{
    if (n <= 1) {
        return n;
    } else {
        return nthfibonacci(n - 1) + nthfibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th term of the Fibonacci sequence is: " << nthfibonacci(n) <<endl;
    return 0;
}
