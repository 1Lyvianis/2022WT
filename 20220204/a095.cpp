#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    while(cin>>a>>b)
    {
        if(a!=b)
            cout << b + 1<<'\n';
        else
            cout << b<<'\n';
    }
    
    return 0;
}

/*
ex. 10 people, I(anyone) see 2 red hats.
-->there must be a total of either 2 or 3 red hats.


CASE : total 2 reds
day 1 : 0 leave.
day 2 : all people with red hats leave,since
Perspective of any person with red hat sees only 1 red hat
-->total must be 1 or 2 reds
yet if there's only 1, he should've left yesterday
therefore, we have 2 hats in total, and (any person with red hat) am one of which.
day 3 : all people with white hats leave.

CASE : total 3 reds
day 1 : 0 leave.
day 2 : 0 leave,since
Perspective of any person with red hat sees 2 red hats
-->total must be 2 or 3 reds
day 3 : all people with red hats leave,since
Perspective of any person with red hat:
if total of reds is 2, based on last case, they should leave at day 2.
however, they didn't leave, which contradicts to the previous hypothesis.
therefore, total of reds must be three, and (any person with red hat) am one of which
day 4 : all people with white hats leave.
*/