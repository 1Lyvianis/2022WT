#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;
int main(){
    //ios::sync_with_stdio(false); // wtf WA if add this line = =
    cin.tie(0);
    string s;
    int tot,temp,cnt;
    while( char c = getchar() != EOF)//ignore the first number so that i can use stringstream :D
    {
        cin.ignore();//ignore the space
        getline(cin, s);
        stringstream ss(s);
        //reset
        tot = 0;
        cnt = 0;
        //
        while(ss>>temp)
        {
            tot += temp;
            cnt++;
        }
        if(float(tot)/cnt >59)
            cout << "no\n";
        else
            cout << "yes\n";
        
    }

    return 0;
}