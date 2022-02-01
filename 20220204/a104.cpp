#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //ios::sync_with_stdio(false);
    cin.tie(0);
    int n,temp;
    vector<int> bunker;
    while(cin>>n)
    {
        bunker.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            bunker.push_back(temp);
        }
        sort(bunker.begin(),bunker.end());
        for (int i = 0; i < bunker.size();i++)
        {
            cout << bunker.at(i) << " ";
        }
        cout << '\n';
    }
    return 0;
}