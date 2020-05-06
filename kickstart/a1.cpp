#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main(){
    //freopen("1.in","r",stdin);
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    // 大根堆
    priority_queue<int, vector<int>, less<int>> a;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        a.push(x);
    }
    
    for (int i = 0; i < m; i++) {
        int tmp = a.top();
        a.pop();
        a.push((tmp+k*(i+1))/2 - k*(i+1));
    }
    
    while(!a.empty()) {
        ans += a.top();
        a.pop();
    }
    
    cout << ans + k*m*n << endl;
    return 0;
}