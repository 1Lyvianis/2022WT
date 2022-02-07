#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << (n / 12) * 50 + (n % 12) * 5;
    return 0;
}