#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<string, string> dictionary = {
    {"HELLO","ENGLISH"} ,{"HOLA","SPANISH"},
    {"HALLO","GERMAN"} ,{"BONJOUR","FRENCH"},
    {"CIAO","ITALIAN"} ,{"ZDRAVSTVUJTE","RUSSIAN"},
    };
    string input;
    int cnt = 1;
    while(123456789)
    {
        cin >> input;
        if(input == "#")
            break;
        cout << "Case " << cnt << ": ";
        auto iter = dictionary.find(input);
        if(!dictionary.count(input))
        {
            cout << "UNKNOWN" << '\n';
        }
        else
        {
            cout << iter->second << '\n';
        }
        ++cnt;
    }

    return 0;
}