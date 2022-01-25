#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n,arr[5];   
    cin >> n;
    for (int i = 0; i < n;++i)
    {
        for (int j = 0; j < 4;j++)
        {
            cin >> arr[j];
        }
        if(arr[1] - arr[0] == arr[2] - arr[1]  && arr[2] - arr[1] == arr[3] - arr[2])
        {
            arr[4] = arr[3] + arr[3] - arr[2];
        }
        //if((arr[1] - arr[0]) == (arr[2] - arr[1]) == (arr[3] - arr[2])) is wrong!
        else
        {
            arr[4] = arr[3] * arr[3] / arr[2];
        }
        for (int j = 0; j < 5;j++)
        {
            cout << arr[j] << ' ';
        }
        cout << endl;
    }

        return 0;
}