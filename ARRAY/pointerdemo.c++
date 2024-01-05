#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int *ptr=&x;

int *ptr1=&y;
cout<<*ptr + *ptr1;
}