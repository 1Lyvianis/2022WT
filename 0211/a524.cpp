#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    //ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n)
    {
        vector<int> bunker;
        for (int i = 1; i < n + 1; i++)
        {
            bunker.push_back(i);
        }
        reverse(bunker.begin(), bunker.end());
        do{
            for (int i = 0; i < n;i++)
            {
                cout << bunker.at(i);
            }
            cout << '\n';
        } while (prev_permutation(bunker.begin(), bunker.end()));
    }
    return 0;
}
