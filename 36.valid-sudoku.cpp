/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
  bool isValidSudoku(vector<vector<char>>& board) {
    // 行、列、ブロックのsetを保持しておく
    vector<set<int>> rows(9), cols(9), blocks(9);

    for (int i=0; i<9; i++) {
      for (int j=0; j<9; j++) {
        // . は省略
        if (board[i][j] == '.') continue;
        
        // 要素を数値に変換して変数に格納
        int el = board[i][j] - '0';
        if (rows[i].count(el) || cols[j].count(el) || blocks[(i/3)*3 + j/3].count(el))
          return false;

        rows[i].insert(el);
        cols[j].insert(el);
        blocks[(i/3)*3 + j/3].insert(el);
      }
    }
    return true;
  }
};
// @lc code=end

