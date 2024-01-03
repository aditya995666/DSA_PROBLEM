#include<iostream>
using namespace std;
int main(){
    float f=10.78;
    int x=12;
    void *ptr=&f;
    ptr=&x;
    cout<<ptr<<endl;
}