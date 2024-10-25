/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<9; i++) {
            unordered_map<char, int> um;
            for (int j=0; j<9; j++) {
                if (!isdigit(board[i][j])) continue;
                if (um[board[i][j]] > 0) return false;
                um[board[i][j]]++;
            }
        }

        for (int i=0; i<9; i++) {
            unordered_map<char, int> um;
            for (int j=0; j<9; j++) {
                if (!isdigit(board[j][i])) continue;
                if (um[board[j][i]] > 0) return false;
                um[board[j][i]]++;
            }
        }

        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                if (i%3 != 0 || j%3 != 0) continue;
                unordered_map<char, int> um;
                for(int k=0; k<3; k++) {
                    for (int l=0; l<3; l++) {
                        if (!isdigit(board[i+k][j+l])) continue;
                        if (um[board[i+k][j+l]] > 0) return false;
                        um[board[i+k][j+l]]++;
                    }
                }
            }
        }

        return true;
    }
};
// @lc code=end

