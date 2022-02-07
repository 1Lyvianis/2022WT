#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;
int roman_to_int(string target);
void int_to_roman(int difference);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    while(1)
    {
        cin >> a;
        if(a == "#")
            break;
        cin >> b;
        int difference = abs(roman_to_int(a) - roman_to_int(b));
        int_to_roman(difference);
    }
    return 0;
}
int roman_to_int(string target)//use dictionary instead
{
    map<char, int> dictionary = {
        {'M',1000},{'D',500},{'C',100},{'L',50},
        {'X',10},{'V',5},{'I',1}
    };
    int cnt = 0;
    for (int i = 0; i < target.size(); i++)
    {
        auto current_iter = dictionary.find(target.at(i));
        cnt += current_iter->second;
        if(i != 0)//bounds checking
        {
            auto last_iter = dictionary.find(target.at(i-1));
            if(current_iter->second > last_iter->second)
                cnt -= 2 * last_iter->second;
        }
    }
    return cnt;
}
void int_to_roman(int difference)
{
    if(difference == 0)
    {
        cout << "ZERO\n";
        return;
    }
    //use while statement for normal cases, and use if statement to handle special cases
    while(difference >= 1000)
    {
        cout << 'M';
        difference -= 1000;
    }
    if(difference >= 900)
    {
        cout << "CM";
        difference -= 900;
    }
    else if(difference >= 500)
    {
        cout << "D";
        difference -= 500;
    }
    else if(difference >= 400)
    {
        cout << "CD";
        difference -= 400;
    }
    while(difference >= 100)
    {
        cout << "C";
        difference -= 100;
    }
    if(difference >= 90)
    {
        cout << "XC";
        difference -= 90;
    }
    else if(difference >= 50)
    {
        cout << "L";
        difference -= 50;
    }
    else if(difference >= 40)
    {
        cout << "XL";
        difference -= 40;
    }
    while(difference >= 10)
    {
        cout << "X";
        difference -= 10;
    }
    if(difference >= 9)
    {
        cout << "IX";
        difference -= 9;
    }
    else if(difference >= 5)
    {
        cout << "V";
        difference -= 5;
    }
    else if(difference >= 4)
    {
        cout << "IV";
        difference -= 4;
    }
    while(difference >= 1)
    {
        cout << "I";
        difference -= 1;
    }
    cout << '\n';
}
