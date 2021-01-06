#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>> a>> b>> c;
    if(a>b&&a>c){
        cout<< "Max: "<<a;
    }
    else if(c>b&&c>a){
        cout<< "Max: "<<c;
    }
    else if(b>c&&b>a){
        cout<< "Max: "<<b;
    }
    return 0;
}