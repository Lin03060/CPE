#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    unsigned int a, b;
    while (cin >> a >> b) {
        cout << abs((long long)a - (long long)b) << endl;
    }
    return 0;
}
