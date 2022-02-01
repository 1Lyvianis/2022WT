#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    string list;
    cin >> list;
    for (int i = 0; i < list.size()-1;i++)
    {
        cout << abs(list.at(i) - list.at(i + 1));
    }
        return 0;
}