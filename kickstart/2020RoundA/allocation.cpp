#include <queue>
#include <iostream>
using namespace std;

int main() {
    int T, N, B;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> N >> B;
        int price, max_price = 0, cur_budget = 0;
        priority_queue<int, vector<int>, less<int>> prices;
        while (N--) {
            cin >> price;
            prices.push(price);
            max_price = max(max_price, price);
            cur_budget += price;
            if (cur_budget > B) {
                cur_budget -= prices.top();
                prices.pop();
            }
        }
        cout << "Case #" << i << ": " << prices.size() << endl;
    }
    return 0;
}