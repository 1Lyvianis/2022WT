#include <iostream>
#include <cstdlib>
#include <stack>
#include <sstream>
#include <cstring>
using namespace std;
typedef long long ll;
inline void operate(ll *upper_operand, ll *lower_operand, stack<ll> *bunker);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<ll> bunker;
    string s,temp;
    getline(cin, s);
    stringstream ss(s);
    while(ss>>temp)
    {
        ll result, upper_operand, lower_operand;
        if(temp == "+")
        {
            operate(&upper_operand, &lower_operand, &bunker);
            result = lower_operand + upper_operand;
            bunker.push(result);
        }
        else if(temp == "-")
        {
            operate(&upper_operand, &lower_operand, &bunker);
            result = lower_operand - upper_operand;
            bunker.push(result);
        }
        else if(temp == "*")
        {
            operate(&upper_operand, &lower_operand, &bunker);
            result = lower_operand * upper_operand;
            bunker.push(result);
        }
        else if(temp == "/")
        {
            operate(&upper_operand, &lower_operand, &bunker);
            result = lower_operand / upper_operand;
            bunker.push(result);
        }
        else
        {
            bunker.push(stoll(temp));
        }
    }
    cout << bunker.top() << '\n';

    return 0;
}

inline void operate(ll *upper_operand, ll *lower_operand, stack<ll> *bunker)
{
    *upper_operand = bunker->top();
    bunker->pop();
    *lower_operand = bunker->top();
    bunker->pop();
}
