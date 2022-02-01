#include <iostream>
#include <cstdlib>
int f(int current,int sum);
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin>>n)
    {
        cout << f(n,0) << '\n';
    }
    return 0;
}
int f(int current,int sum)
{
    if(current != 1)
    {
        sum += f(current-1,sum) + (current - 1) * 2;
    }
    else
    {
        sum += 2;
    }
    return sum;
}