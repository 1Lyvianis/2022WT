#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
    char str[1000];
    cin >> str;
    int len = strlen(str);
    for (int i = 0; i < len / 2;i++)
    {
        if(str[i] != str[len-i-1])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}