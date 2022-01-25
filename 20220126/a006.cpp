#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, ans1, ans2;
    int discriminant;
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if(discriminant > 0)
    {
        ans1 = (-b + sqrt(discriminant)) / (2 * a);
        ans2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two different roots x1=" << ans1 << " , x2=" << ans2;
    }
    else if(discriminant == 0)
    {
        ans1 = (-b) / (2 * a);
        cout << "Two same roots x=" << ans1;
    }
    else{
        cout << "No real root";
    }
    return 0;
}