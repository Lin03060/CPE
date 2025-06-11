#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a, b;
    while (getline(cin, a)) {
        if (!getline(cin, b)) break;

        vector<int> freqA(26, 0), freqB(26, 0);

        for (char c : a) freqA[c - 'a']++;
        for (char c : b) freqB[c - 'a']++;

        string result;
        for (int i = 0; i < 26; i++) {
            int cnt = min(freqA[i], freqB[i]);
            result += string(cnt, 'a' + i);
        }

        cout << result << "\n";
    }
    return 0;
}

