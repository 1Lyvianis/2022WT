#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    while(cin>>n)
    {
        if(n<=10)
            cout << 6 * n << '\n';
        else if(n<=20)
            cout << 60 + 2 * (n - 10) << '\n';
        else if(n<40)
            cout << 80 + (n - 20) << '\n';
        else
            cout << 100 << '\n';
    }

    return 0;
}