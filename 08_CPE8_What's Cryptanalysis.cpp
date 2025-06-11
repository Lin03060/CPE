#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;


bool cmp(pair<char, int> a, pair<char, int> b) {
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    int freq[26] = {0}; 

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        for (char c : line) {
            if (isalpha(c)) {
                c = toupper(c);
                freq[c - 'A']++;
            }
        }
    }

    vector<pair<char, int>> result;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            result.push_back({(char)(i + 'A'), freq[i]});
        }
    }

    sort(result.begin(), result.end(), cmp);

    for (auto p : result) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}

