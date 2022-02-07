#include <iostream>
#include <cstdlib>
using namespace std;
void solve();
int f(int n);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
void solve()
{
    int n;
    while(cin>>n)
    {
        int foo = f(n);
        long long bar = 0;
        for (int i = 1; i <= n;i++)
        {
            bar += f(i);
        }
        cout << foo << " " << bar << '\n';
    }
}
int f(int n)
{
    return n * (n + 1) / 2;
}
