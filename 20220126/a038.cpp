#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
typedef long long ll;
int main(){//integer method
    ll a;
    bool flag = 0;
    cin >> a;
    if(a == 0)
    {
        cout << '0';
        return 0;
    }
    while(a > 0)
    {
        if(a % 10 != 0)
            flag = 1;
        if(flag)
            cout << a % 10;
        a /= 10;
    }
    return 0;
}
/* string method
    char num[100];
    bool flag = 0;
    cin >> num;
    int len = strlen(num);
    for (int i = 0; i < len;i++)
    {
        if(num[len - i - 1] != '0')
            flag = 1;
        if(flag)
        {
            cout << num[len - i - 1];
        }
    }
    if(!flag)
        cout<<'0';
    return 0;
*/
