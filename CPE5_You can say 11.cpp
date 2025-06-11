#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    while (cin >> num) {
        if (num == "0")
            break;

        int odd_sum = 0, even_sum = 0;
        for (int i = 0; i < num.length(); i++) {
            int digit = num[i] - '0';
            if (i % 2 == 0)
                odd_sum += digit;
            else
                even_sum += digit;
        }

        int diff = odd_sum - even_sum;
        
        if (diff < 0)
            diff = -diff;

        if (diff % 11 == 0)
            cout << num << " is a multiple of 11." << endl;
        else
            cout << num << " is not a multiple of 11." << endl;
    }
    return 0;
}

