#include <iostream>
#include <cstdlib>
#include <cmath>
int pwr_counter(int num);
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int lower_bound, upper_bound, sum = 0;
    bool flag = 0;
    cin >> lower_bound >> upper_bound;
    for (int i = lower_bound; i <= upper_bound;++i)
    {
        int temp = i, power = pwr_counter(i);
        sum = 0;
        while(temp != 0)
        {
            sum += pow(temp % 10, power);
            temp /= 10;
        }
        if(i == sum)
        {
            flag = 1;
            cout << i << ' ';
        }
        else//debug
        {
            //cout << i << ' ' << sum << '\n';
        }
    }
    if(!flag)
        cout << "none" << '\n';

    return 0;
}
int pwr_counter(int num)
{
    int cnt = 0;
    while(num != 0)
    {
        num /= 10;
        ++cnt;
    }
    return cnt;
}