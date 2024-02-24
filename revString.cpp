#include <bits/stdc++.h>
using namespace std;

void revString(string& str, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(str[start], str[end]);
    revString(str, start + 1, end - 1);
}

int main() {

    string str;
    cout << "Enter a string: ";
    cin >> str;
    revString(str, 0, str.size() - 1);

    cout << "Reversed string: " << str << std::endl;

    return 0;
}
