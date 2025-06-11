#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int countcarry(string a, string b) {
    
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;

    int carry = 0;       
    int carryCount = 0;    

    for (int i = a.length() - 1; i >= 0; --i) {
        int digitA = a[i] - '0';
        int digitB = b[i] - '0';

        if (digitA + digitB + carry >= 10) {
            carry = 1;
            carryCount++;
        } else {
            carry = 0;
        }
    }
    return carryCount;
}

int main() {
    string a, b;
    while (cin >> a >> b) {
        if (a == "0" && b == "0") break;

        int result = countcarry(a, b);
        if (result == 0)
            cout << "No carry operation." << endl;
        else if (result == 1)
            cout << "1 carry operation." << endl;
        else
            cout << result << " carry operations." << endl;
    }
    return 0;
}

