#include <cstdlib>
#include <iostream>
#include <map>
using namespace std;
int main(){
    map<char, int> dictionary = {
        {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, 
        {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18}, 
        {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35}, 
        {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27}, 
        {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31}, 
        {'Z', 33}
    };
    char c;
    int cnt = 0, check_num;
    for (int i = 0; i < 8;i++)
    {
        c = getchar();
        cnt += (8 - i) * (c - '0');
    }
    c = getchar();
    check_num = c - '0';
    for (char i = 'A'; i <= 'Z';i++)
    {
        auto iter = dictionary.find(i);
        int temp = iter->second / 10 + 9 * (iter->second % 10);
        //note that (temp + cnt) % 10 is possible to be 0, which may cause no outputs, as check_num won't be 10
        if(10-(temp + cnt) % 10 == check_num)
        {
            cout << i;
        }
        if(check_num == 0 && 10-(temp + cnt) % 10 == 10)
        {
            cout << i;
        }
    }
        return 0;
}