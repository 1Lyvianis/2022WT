#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int c = (2 * a + b) % 3;
    switch(c){
        case 0:
            cout << "´¶³q";
            break;
        case 1:
            cout << "¦N";
            break;
        case 2:
            cout << "¤j¦N";
    }
    return 0;
}