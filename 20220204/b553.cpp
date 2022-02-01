#include <iostream>
#include <cstdlib>
using namespace std;
int solve(int n, int cnt);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin>>n)
    {
        cout << solve(n, 0) << '\n';
    }
    return 0;
}
int solve(int n, int cnt)
{
    cnt += 1;
    if(n % 2 == 0)
        return solve(n / 2, cnt);
    else if(n == 1)
        return cnt-1;
    else
        return solve(3 * n + 1, cnt);
}