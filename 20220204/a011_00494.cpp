#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    string arr;
    int cnt;
    bool flag;//flag up indicates a new start of word is available
    while(getline(cin,arr))
    {
        cnt = 0;
        flag = true;
        for (int i = 0; i < arr.size(); i++)
        {
            if(isalpha(arr.at(i))  &&  flag)
            {
                ++cnt;
                flag = false;//flag down
            }
            else if(!isalpha(arr.at(i)))
            {
                flag = true;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
/*strtok method (but not correct, check the description again~)
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
    //ios::sync_with_stdio(false);
    cin.tie(0);
    char arr[1000];
    int cnt = 0;
    while(fgets(arr, 900, stdin))
    {
        cnt = 0;
        const char delimiter[2] = " ";
        char *token = strtok(arr, delimiter);
        while (token != __null)
        {
            token = strtok(NULL, delimiter);
            ++cnt;
        }
        cout << cnt << '\n'; //will not output anything if ios::sync_with_stdio(false)
    }
    return 0;
}
   
*/