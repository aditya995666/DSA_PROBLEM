#include<iostream>
using namespace std;
int main(){
    int x=6;
   int y=8;
   int *ptr=&y;

    //cout<<*ptr<<endl;
    int *ptr1=&x;
    //cout<<*ptr1<<endl;
    //x=23;
   // cout<<x<<endl;
   // cout<<*ptr;
   *ptr1=50;
   cout<<x<<endl;
   cout<<*ptr1<<endl;
}