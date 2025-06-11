#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int x; 
    cin >> x;//輸入有幾筆測資 
    
    while (x--) {
        int r;
        cin >> r;//輸入親戚的人數 

        vector<int> streets(r);
        for (int i = 0; i < r; ++i) {
            cin >> streets[i];//輸入鄰居居住的位置 
        }

    
        sort(streets.begin(), streets.end());
        int median = streets[r / 2]; //尋找中位數 

       
        int total_distance = 0;
        for (int i = 0; i < r; ++i) {
            total_distance += abs(streets[i] - median);//計算總距離 
        }

        cout << total_distance << endl;//輸出總距離 
    }

    return 0;
}

