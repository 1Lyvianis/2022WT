#include <iostream>
#include <cstdlib>
typedef long long ll;
int C(int up, int down);
ll gcd(ll a, ll b);
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int up, down;
    while(cin>>up>>down)
    {

        cout << C(up, down) << '\n';
    }
    return 0;
}
int C(int up, int down)
{
    if(down == 0 || down == up)
        return 1;
    if(up - down < down)
    {
        down = up - down;
    }
    ll numerator = 1, denominator = 1;
    for (int i = 0; i < down;i++)
    {
        numerator *= (up - i);
        denominator *= (down - i);
        ll temp = gcd(numerator, denominator);
        numerator /= temp;
        denominator /= temp;
    }
    return numerator / denominator;
}
ll gcd(ll a,ll b)
{
    if(b == 0)
    {
        return a;
    }       
    else
    {
        return gcd(b, a % b);
    }
        
}
