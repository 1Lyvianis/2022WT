#include <iostream>
#include <cstdlib>
using namespace std;
int transform_type(char *bunker);
void map_flip(int type, int row, int col,char **map);
int main(){
    char list[101],name[50],operation[50];
    int row, col;
    while(fgets(list, 100, stdin))
    //fgets returns __null if encountered EOFerror, and returns a pointer to string if success.
    {
        sscanf(list, "%[^ ] %d %d %[^ ]", name, &col, &row, operation);
        //2D dynamic arr
        char **map;
        map = new char *[row + 4];
        for (int i = 0; i < row + 4;i++)
        {
            map[i] = new char[col + 4];
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                map[i][j] = getchar();
            }
            getchar();
        }
        puts(name);
        map_flip(transform_type(operation),row,col,map);
        free(map);
    }
    return 0;
}
int transform_type(char *bunker)
{
    int inverse = 0, rotate = 0;
    for (int i = 0; bunker[i] != '\0';i++)
    {
        if(bunker[i] == 'I')
        {
             ++inverse;
        } 
        else if(bunker[i] == 'R')
        {
            ++rotate;
        }
    }
    if(inverse % 2 == 0 && rotate % 2 == 0)//even even
        return 1;
    else if(inverse % 2 != 0 && rotate % 2 == 0)//odd even
        return 2;
    else if(inverse % 2 != 0 && rotate % 2 != 0)//odd odd
        return 3;
    else                                        //even odd
        return 4;
}
inline void map_flip(int type, int row, int col,char **map)
{
    switch(type)
    {
        case 1:// original
            for (int i = 0; i < row;i++)
            {
                for (int j = 0; j < col;j++)
                {
                    putchar(map[i][j]);
                }
                putchar('\n');
            }
            break;
        case 2://1 upside-down
            for (int i = row - 1; i >= 0;i--)
            {
                for (int j = 0; j < col;j++)
                {
                    putchar(map[i][j]);
                }
                putchar('\n');
            }
            break;
        case 3://1 upside-down + 1 LR-swap
            for (int i = row - 1; i >= 0;i--)
            {
                for (int j = col - 1; j >= 0;j--)
                {
                    putchar(map[i][j]);
                }
                putchar('\n');
            }
            break;
        case 4://1 LR-swap
            for (int i = 0; i < row;i++)
            {
                for (int j = col - 1; j >= 0;j--)
                {
                    putchar(map[i][j]);
                }
                putchar('\n');
            }
            break;
    }
}