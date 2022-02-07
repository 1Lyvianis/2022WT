#include <iostream>
#include <cstdlib>
using namespace std;
void solve(int left, int right, int cnt, int total);
char arr[30];
//this program will occur TLE if we use vector<char> instead.
//what's more, passing a char * instead of declaring it globally results in unexpected outputs.
int main(){
    int n;
    while(scanf("%d",&n) == 1)
    {
        
        solve(0, 0, 0, n * 2);
        putchar('\n');
    }
    return 0;
}
//devide and conquer
void solve(int left,int right,int cnt,int total) 
{
    if(left > total / 2 || right > left)//discard this recursion if encounted illegal situation
        return;
    if(cnt == total)//output if completely filled
    {
        puts(arr);
        return;
    }
    ////actions
    arr[cnt] = '(';
    solve(left + 1, right, cnt + 1, total);
    arr[cnt] = ')';
    solve(left, right + 1, cnt + 1, total);
}