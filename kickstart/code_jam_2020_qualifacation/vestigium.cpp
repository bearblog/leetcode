#include <set>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int T, N;
    // cout << "Starting caculate" << endl;
    cin >> T;
    for (int k = 0; k < T; k++) {
        cin >> N;
        vector<vector<int>> vest(N, vector<int>(N, 0));
        int row = 0, col = 0, trace = 0, tmp = 0;
        for (int i = 0; i < N; i++) {
            set<int> s;
            for (int j = 0; j < N; j++) {
                int val;
                cin >> val;
                vest[i][j] = val;
                if (s.find(val) != s.end())
                    tmp = 1;
                else
                    s.insert(val);
            }
            row += tmp;
            tmp = 0;
        }

        for (int j = 0; j < N; j++) {
            set<int> s;
            for (int i = 0; i < N; i++) {
                if (s.find(vest[i][j]) != s.end()) 
                    tmp = 1;
                else
                    s.insert(vest[i][j]);
                
                if (i == j)
                    trace += vest[i][j];
            }
            col += tmp;
            tmp = 0;
        }

        cout << "Case #" << k+1 << ": " << trace << " " << row << " " << col << endl;
    }
    
    return 0;
} 