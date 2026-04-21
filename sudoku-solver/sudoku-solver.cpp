// Sudoku Solver | Hard
// https://leetcode.com/problems/sudoku-solver/
// Solved: 2026-04-21
//
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