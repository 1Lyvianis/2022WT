#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,foo;
    cin >> n;
    while(n--)
    {
        int cnt = 1;
        cin >> foo;
        if(foo == 0)
        {
            cout << 0 << '\n';
            continue;
        }
            
        while(foo != 0)
        {
            cnt *= foo % 10;
            foo /= 10;
        }
        cout << cnt << '\n';
    }
    return 0;
}