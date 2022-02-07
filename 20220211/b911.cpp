#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n) == 1)
    {
        int ans = log(n) / log(2);
        printf("%d\n", ans + 1);
    }
    return 0;
}
/*
1 2 3 4 = 3
1 0 1 2
0 0 0 1
0 0 0 0

1 2 3 4 5 = 3
1 2 0 1 2
0 1 0 1 0
0 0 0 0 0

1 2 3 4 5 6 = 3
1 2 0 1 2 3
1 0 0 1 0 1
0 0 0 0 0 0

1 2 3 4 5 6 7 = 3
1 2 3 0 1 2 3
1 0 1 0 1 0 1
0 0 0 0 0 0 0

1 2 3 4 5 6 7 8 = 4
1 2 3 0 1 2 3 4
1 0 1 0 1 0 1 2
0 0 0 0 0 0 0 1
0 0 0 0 0 0 0 0

*/