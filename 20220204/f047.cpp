#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    //ios::sync_with_stdio(false);
    cin.tie(0);
    string input,temp;
    stringstream ss;
    vector<string> bunker;
    getline(cin, input);
    ss << input;
    for (int i = 0; !ss.eof();i++)
    {
        ss >> temp;
        bunker.push_back(temp);
    }
    for (int i = 0; i < bunker.size(); i += 3)
    {
        cout << bunker.at(i) << ' ';
    }
    putchar('\n');
    for (int i = 1; i < bunker.size(); i += 3)
    {
        cout << bunker.at(i) << ' ';
    }
    putchar('\n');
    for (int i = 2; i < bunker.size(); i += 3)
    {
        cout << bunker.at(i) << ' ';
    }
    putchar('\n');
    

    return 0;
}