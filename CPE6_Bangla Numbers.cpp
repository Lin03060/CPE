#include <iostream>
#include <string>
using namespace std;


void printBangla(long long n) {
    if (n >= 10000000) {
        printBangla(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000) {
        cout << " " << n / 100000 << " lakh";
        n %= 100000;
    }
    if (n >= 1000) {
        cout << " " << n / 1000 << " hajar";
        n %= 1000;
    }
    if (n >= 100) {
        cout << " " << n / 100 << " shata";
        n %= 100;
    }
    if (n > 0)
        cout << " " << n;
}

int main() {
    long long n;
    int case_num = 1;
    while (cin >> n) {
        printf("%4d.", case_num++);

        if (n == 0)
            cout << " 0" << endl;
        else {
            printBangla(n);
            cout << endl;
        }
    }
    return 0;
}

