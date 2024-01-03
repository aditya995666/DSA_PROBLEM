#include<iostream>
using namespace std;
int main(){
    //use of dangling pointer;
    int *ptr=NULL;
    {
        int x=10;
        ptr=&x;
    }
    cout<<ptr<<endl;
}