#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    char c;
    while((c = getchar()) && c!= '\n')
    {
        cout << char(c - 7);
    }
    return 0;
}