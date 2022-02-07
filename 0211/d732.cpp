#include <iostream>
#include <cstdlib>
using namespace std;
int b_search(int data[], int target, int n);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int data[n + 4], ask;
    for (int i = 0; i < n;i++)
    {
        cin >> data[i];
    }
    while(k--)
    {
        cin >> ask;
        cout << b_search(data, ask, n) << '\n';
    }
}
int b_search(int data[],int target,int n)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(data[mid] == target)
            return mid + 1;
        else if(data[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}