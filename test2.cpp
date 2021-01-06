#include <cmath>
#include <iostream>
#include <string>
using namespace std;
bool isSquare(int n)
{   
    for(int i = 1; i <=n;i++){
         if(i*i==n){
             return true;
         }
    }
    return false;
    
}
int main()
{   
    int n;
    cin>>n;
    if(isSquare(n)){
        cout<<"Square number";
    }
    else{
        cout<<"Not Square";
    }
    
    
    return 0;
}