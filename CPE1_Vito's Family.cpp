#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int x; 
    cin >> x;//��J���X������ 
    
    while (x--) {
        int r;
        cin >> r;//��J�˱����H�� 

        vector<int> streets(r);
        for (int i = 0; i < r; ++i) {
            cin >> streets[i];//��J�F�~�~����m 
        }

    
        sort(streets.begin(), streets.end());
        int median = streets[r / 2]; //�M�䤤��� 

       
        int total_distance = 0;
        for (int i = 0; i < r; ++i) {
            total_distance += abs(streets[i] - median);//�p���`�Z�� 
        }

        cout << total_distance << endl;//��X�`�Z�� 
    }

    return 0;
}

