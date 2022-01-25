#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int row, col;
    while(cin >> row >>col)
    {
        
        int matrix[row][col],rmatrix[col][row];;
        for (int i = 0; i < row;i++)
        {
            for (int j = 0; j < col;j++)
            {
                cin >> matrix[i][j];
                rmatrix[j][i] = matrix[i][j];
            }
        }
        for (int j = 0; j < col;j++)
        {
            for (int i = 0; i < row;i++)
            {
                cout << rmatrix[j][i] << " ";
            }
            cout << endl;
        }
    }
        return 0;
}