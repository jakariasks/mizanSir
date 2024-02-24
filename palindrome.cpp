#include<bits/stdc++.h>
using namespace std;

bool Palindrome(const string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return Palindrome(str, start + 1, end - 1);
}

int main() {
    string num;
    cout << "Enter a string: ";
    cin >> num;

    if (Palindrome(num, 0, num.length() - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
