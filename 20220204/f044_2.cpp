#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    b /= a;
    b += 1;
    cout << log(b) / log(2);
    return 0;
}
