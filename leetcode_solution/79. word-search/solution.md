

```c++
class Solution {
private:
    bool dfs(vector<vector<char>> &board, string &word, int index, int i, int j){
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || word[index] != board[i][j]) 
            return false;

        if (index == word.size() - 1)
            return true;

        char tmp = board[i][j];
        board[i][j] = '-';
        index++;
        if (dfs(board, word, index, i-1, j) ||
            dfs(board, word, index, i, j-1) ||
            dfs(board, word, index, i+1, j) ||
            dfs(board, word, index, i, j+1))
            return true;
        board[i][j] = tmp;
        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (dfs(board, word, 0, i, j))
                    return true;
            }
        }
        return false;
    }
};
```

