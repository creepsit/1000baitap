#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float S=0;
    for(int i=1; i<=n; i++){
        S+=1/ pow(i, 3);
    }
    cout<< S;
    return 0;
}