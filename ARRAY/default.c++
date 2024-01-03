#include<iostream>
using namespace std;
void sum(int *x){
    cout<<x<<" ";
}
int main(){ 
   int x=9;
    sum(&x);
    return 0;
}