#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>> a>> b;
    if(a==0){
        if(b==0){
            cout<<"Phuong trinh co vo so nghiem!";
        }
        else{
            cout<<"Phuong trinh vo nghiem!";
        }
    }
    else {
        if(b==0){
            cout<<"x = 0";
        }
        else{
            cout<<"x = "<<float(-b)/a;
        }
    }
    return 0;
}