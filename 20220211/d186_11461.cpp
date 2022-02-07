#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    int a, b;
    while(1)
    {
        scanf("%d %d", &a, &b);
        if(!a)
            break;
        a = ceil(sqrt(a));
        b = floor(sqrt(b));
        printf("%d\n", b - a + 1);
    }
    return 0;
}
/* wrong and slow method!
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int a, b;
    while(1)
    {
        int cnt = 0;
        scanf("%d %d", &a, &b);
        if(!a)
        {
            return 0;
        }
        for (int i = 1; i < 100;i++)
        {
            if(i*i > b)
                break;
            if(i*i >= a)
                ++cnt;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
*/