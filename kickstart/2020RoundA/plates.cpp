#include <queue>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int T, N, K, P, value;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> N >> K >> P;
        vector<queue<int>> plates(N);
        priority_queue<int, vector<int>, less<int>> top_plates;
        vector<int> top_plates_list;
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < K; k++){
                cin >> value;
                plates[j].push(value);
            } 
            top_plates.push(plates[j].front());
            top_plates_list.push_back(plates[j].front());
        }

        int id, cur_max, beauty=0;
        while(P--){
            cur_max = top_plates.top();
            top_plates.pop();
            beauty += cur_max;
            vector<int>::iterator it = find(top_plates_list.begin(), top_plates_list.end(), cur_max);
            id = distance(top_plates_list.begin(), it);
            if(!plates[id].empty()) {
                top_plates.push(plates[id].front());
                top_plates_list[id] = plates[id].front();
                plates[id].pop();
            } else {
                top_plates.push(0);
                top_plates_list[id] = 0;
            }
        }

        cout << "Case #" << i << ": " << beauty << endl;
    }
    return 0;
}