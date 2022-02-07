#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,temp;
    int lower = -1, upper = 101;
    cin >> n;
    vector<int> bunker;
    for (int i = 0; i < n;i++)
    {
        cin >> temp;
        bunker.push_back(temp);
        if(temp > lower && temp < 60)
        {
            lower = temp;
        }
        else if(temp < upper && temp >= 60)
        {
            upper = temp;
        }
    }
    sort(bunker.begin(), bunker.end());
    for (int i = 0; i < n; i++)
    {
        cout << bunker.at(i) << " ";
    }
    cout << '\n';
    if(lower == -1)
        cout << "best case\n";
    else
        cout << lower << '\n';
    if(upper == 101)
        cout << "worst case\n";
    else
        cout << upper << '\n';
}