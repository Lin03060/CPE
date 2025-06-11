#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    map<string, int> country_count;

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string country;
        ss >> country; 

        country_count[country]++;
    }

    for (auto it : country_count) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

