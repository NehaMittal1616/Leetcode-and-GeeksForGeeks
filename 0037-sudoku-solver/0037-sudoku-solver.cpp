#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
       vector<unordered_map<int,int>>rows(9);
       vector<unordered_map<int,int>>cols(9);
       vector<unordered_map<int,int>>boxes(9);
       for(int i=0;i<9;i++)
       {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]!='.')
            {
                int num=board[i][j]-'0';
                rows[i][num]++;
                cols[j][num]++;
                int boxindex=(i/3)*3+(j/3);
                boxes[boxindex][num]++;
            }
        }
       }
       solve(board, rows, cols, boxes, 0,0);
    }
private:
bool solve(vector<vector<char>>&board, vector<unordered_map<int,int>>&rows, vector<unordered_map<int,int>>&cols, vector<unordered_map<int,int>>&boxes, int row,int col )
{
    if(row==9) return true;
    if(col==9) return solve(board, rows,cols, boxes, row+1,0);
    if(board[row][col]!='.')
    {
       return solve(board, rows,cols,boxes, row,col+1);
    }
 for(int num=1;num<=9;num++)
 {
    int boxindex=(row/3)*3+(col/3);
    if(rows[row][num]==0 && cols[col][num]==0 &&boxes[boxindex][num]==0)
    {
        board[row][col]=num+'0';
        rows[row][num]++;
        cols[col][num]++;
        boxes[boxindex][num]++;
    
    if(solve(board, rows, cols, boxes, row,col+1))
    {
        return true;
    }
    board[row][col]='.';
    rows[row][num]--;
    cols[col][num]--;
    boxes[boxindex][num]--;
    }
 }
 return false;

}

};
