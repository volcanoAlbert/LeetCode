#include <vector>
#include <set>
#include <iostream>

using namespace std;

void printMatrix(vector<vector<int>>& matrix);

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int line = matrix.size(), column = matrix[0].size();
        set<int> zeroLine, zerColumn;
        for(int i = 0; i < line; ++i){
            for(int j = 0; j < column; ++j){
                if(matrix[i][j] == 0){
                    zeroLine.insert(i);
                    zerColumn.insert(j);
                }
            }
        }
        for(set<int>::iterator it = zeroLine.begin(); it != zeroLine.end(); ++it)
            setLineZero(matrix, *it);
        for(set<int>::iterator it = zerColumn.begin(); it != zerColumn.end(); ++it)
            setColumnZero(matrix, *it);
    }

    void setLineZero(vector<vector<int>>& matrix, int line){
        for(int j = 0; j < matrix[0].size(); ++j){
            matrix[line][j] = 0;
        }
    }

    void setColumnZero(vector<vector<int>>& matrix, int column){
        for(int i = 0; i < matrix.size(); ++i){
            matrix[i][column] = 0;
        }
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    printMatrix(matrix); 
    s.setZeroes(matrix);
    printMatrix(matrix);
    return 0;
}

void printMatrix(vector<vector<int>>& matrix){
    for(int i = 0; i < matrix.size(); ++i){
        for(int j = 0; j < matrix[0].size(); ++j){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}