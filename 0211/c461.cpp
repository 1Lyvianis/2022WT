#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int a, b,target;
    bool flag = 0;
    scanf("%d %d %d", &a, &b, &target);
    if((a && b) == target)
    {
        printf("AND\n");
        flag = 1;
    }
    if((a || b) == target)
    {
        printf("OR\n");
        flag = 1;
    }
    if(((a * b == 0) && (a + b) != 0) == target)
    {
        printf("XOR\n");
        flag = 1;
    }
    if(!flag)
        printf("IMPOSSIBLE\n");
    
    return 0;
}