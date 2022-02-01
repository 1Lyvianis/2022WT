#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
using namespace std;
inline int eat_carrot(int type, int health, vector<int> bunker, int *poison);
    int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string input;
    stringstream ss; //faster : stringstream ss(input);
    vector<int> carrots, bunker;
    int n,temp;
    bool dead;
    cin >> n;
    while(n--)
    {
        //reset
        dead = 0;
        ss.str("");
        ss.clear();
        bunker.clear();
        carrots.clear();
        //total input numbers known
        for (int j = 0; j < 6;j++)
        {
            cin >> temp;
            bunker.push_back(temp);
        }
        int health = bunker.back();
        int poison = 0;
        //total input numbers unknown
        cin.ignore();
        getline(cin, input);
        if(input.length() == 0)
        {
            cout << health << "g\n";
            continue;
        }
        ss << input;
        while(ss>>temp)
        //don't use for(int j = 0; !ss.eof(); j++) and then ss>>temp
        //fatal error might cause!
        {
            health -= poison;
            if(health <= 0)
            {
                cout << "bye~Rabbit\n";
                dead = 1;
                break;
            }
            //ss >> temp;  dont do this here
            health = eat_carrot(temp, health, bunker, &poison);
            if(health <= 0)
            {
                cout << "bye~Rabbit\n";
                dead = 1;
                break;
            }
        }
        if(!dead)
            cout << health << "g\n";
    }
        return 0;
}
inline int eat_carrot(int type,int health,vector<int> bunker,int *poison)
{
    switch(type)
    {
        case(1):
            health += bunker.at(0);
            break;
        case(2):
            health += bunker.at(1);
            break;
        case(3):
            health -= bunker.at(2);
            break;
        case(4):
            health -= bunker.at(3);
            *poison += bunker.at(4);
            break;
    }
    return health;
}
