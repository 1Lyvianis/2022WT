#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int a;
    while(cin>>a)
    {
        if(a % 400 == 0)
        {
            cout << "�|�~"<<endl;
        }
        else if(a % 4 == 0 && a % 100 !=0)
        {
            cout << "�|�~"<<endl;
        }
        else
            cout << "���~"<<endl;
    }
    return 0;
}