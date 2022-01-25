#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int a, int b);
int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
int gcd(int a,int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}
//12 15
//15 12
//12 3
//3 0