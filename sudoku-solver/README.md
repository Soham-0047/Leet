# Sudoku Solver

| | |
|---|---|
| **Difficulty** | 🔴 Hard |
| **Language** | Cpp |
| **Solved** | 2026-04-21 |
| **LeetCode** | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/) |

## Tags

`Array` · `Hash Table` · `Backtracking` · `Matrix`

---

## Problem Statement

Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy **all of the following rules**:

1. Each of the digits 1-9 must occur exactly once in each row.
2. Each of the digits 1-9 must occur exactly once in each column.
3. Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.

The `'.'` character indicates empty cells.

**Example 1:**

```
Input: board = [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
Output: [["5","3","4","6","7","8","9","1","2"],["6","7","2","1","9","5","3","4","8"],["1","9","8","3","4","2","5","6","7"],["8","5","9","7","6","1","4","2","3"],["4","2","6","8","5","3","7","9","1"],["7","1","3","9","2","4","8","5","6"],["9","6","1","5","3","7","2","8","4"],["2","8","7","4","1","9","6","3","5"],["3","4","5","2","8","6","1","7","9"]]
Explanation: The input board is shown above and the only valid solution is shown below:
```

**Constraints:**

- board.length == 9
- board[i].length == 9
- board[i][j] is a digit or '.'.
- It is guaranteed that the input board has only one solution.

---

## Solution

See [`sudoku-solver.cpp`](./sudoku-solver.cpp) for the full solution.

```cpp
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
       solve(board); 
    }

     bool solve(vector<vector<char>>&v){
        for(int i=0;i<v.size();i++){

            for(int j=0;j<v[0].size();j++){

                if(v[i][j] == '.'){

                    for(char c = '1'; c<='9';c++){
                        if(isValid(v,i,j,c)) {
                            v[i][j] = c;
                            
                            if(solve(v) == true){
                                return true;
                            } else {
                                v[i][j] = '.';
                            }
                            
                        }

                    }
                    return false;
                }
            }
        }

        return true;
    }

    bool isValid(vector<vector<char>>&v,int i,int j, char c){
        for(int k=0;k<9;k++){
            if(v[i][k] == c) return false;
            if(v[k][j] == c) return false;
            if(v[3*(i/3) + k/3][3*(j/3) + k%3] == c) return false;
        }

        return true;
    }
};
```

---

*Auto-synced by [LeetCode → GitHub Sync](https://github.com) Chrome Extension.*
