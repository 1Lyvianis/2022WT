#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    int n, a, b, index = 1,cnt;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cnt = 0;
        cin >> a >> b;
        for (int j = a; j <= b;j++)
        {
            float root = sqrt(j);
            if((int)root == root)
            {
                cnt += j;
            }
        }
        cout << "Case " << index << ": " << cnt << '\n';
        ++index;
    }
    return 0;
}