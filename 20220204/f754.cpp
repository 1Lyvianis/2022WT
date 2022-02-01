#include <iostream>
#include <cstdlib>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, money, people, cnt;
    cin >> n;
    for (ll i = 1; i <= n;i++)
    {
        cnt = 0;
        cout << "Case " << i << " :\n";
        cin >> money >> people;
        for (ll j = 1; j < people;j++)
        {
            cout << "��" << j << "�� : ";
            cout << "��" << money / people << "���û�DD! BAD!\n";
        }
        cout << "��" << people << "�� : ";
        cout << "��" << money / people + money % people<< "���û�DD! BAD!\n";
    }
    return 0;
}