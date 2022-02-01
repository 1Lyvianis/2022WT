#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n,temp;
    int foo = 0, bar = 0, baz = 0;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> temp;
        switch(temp%3)
        {
            case 0:
                ++foo;
                break;
            case 1:
                ++bar;
                break;
            case 2:
                ++baz;
                break;
        }
    }
    cout << foo << " " << bar << " " << baz << '\n';

    return 0;
}