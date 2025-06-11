#include <iostream>
using namespace std;


int cycle_length(int n) {
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}


int main() {
    int i, j;
    while (cin >> i >> j) { 
        int start = min(i, j);
        int end = max(i, j);
        int max_cycle = 0;

        for (int i = start; i <= end; i++) {
            int current_cycle = cycle_length(i);
            if (current_cycle > max_cycle)
                max_cycle = current_cycle;
        }
        cout << i << " " << j << " " << max_cycle << endl;
    }
    return 0;
}

