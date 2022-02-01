#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,foo;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> foo;
        if(foo % 400 == 0)
            cout << "a leap year\n";
        else
            cout << (foo % 4 == 0 && foo % 100 != 0 ? "a leap year" : "a normal year")<<'\n';
    }
        return 0;
}