#include <iostream>
#include <cstdlib>
#include <unordered_map>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    unordered_map<string, int> dictionary;
    string input;
    while(getline(cin,input))
    {
        if(!dictionary.count(input))
        {
            cout << "NO" << '\n';
            dictionary[input] = 1;
        }
        else
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}
