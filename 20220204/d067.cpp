#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    if(n % 400 == 0)
        printf("a leap year\n");
    else
        printf("%s\n", n % 4 == 0 && n % 100 != 0 ? "a leap year" : "a normal year");

    return 0;
}
// printf("%s",n % 4 == 0 && n % 100 != 0 ? )