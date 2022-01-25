#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#define shift 48
using namespace std;
int main(){
    map<char, int> dictionary = {
        {'A', 10,} ,{'B', 11,}, {'C', 12,},
        {'D', 13,} ,{'E', 14,}, {'F', 15,},
        {'G', 16,} ,{'H', 17,}, {'I', 34,},
        {'J', 18,} ,{'K', 19,}, {'L', 20,},
        {'M', 21,} ,{'N', 22,}, {'O', 35,},
        {'P', 23,} ,{'Q', 24,}, {'R', 25,},
        {'S', 26,} ,{'T', 27,}, {'U', 28,},
        {'V', 29,} ,{'W', 32,}, {'X', 30,},
        {'Y', 31,} ,{'Z', 33,}
    };
    int cnt = 0,index = 8;
    char c;
    vector<char> bunker;
    for (int i = 0; i < 10;i++)
    {
        c = getchar();
        bunker.push_back(c);
    }
    auto temp = dictionary.find(bunker.at(0));
    cnt += temp->second / 10 + 9 * (temp->second % 10);
    for (int i = 1; i < 10;i++)
    {
        cnt += (bunker.at(i)-shift) * index;// -48 to swap char type number back to int
        --index;
    }
    cnt += bunker.back()-shift;
    if(cnt%10 == 0)
        printf("real");
    else
        printf("fake");

    return 0;
}