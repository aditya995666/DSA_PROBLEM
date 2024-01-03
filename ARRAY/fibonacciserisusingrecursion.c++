#include<iostream>
using namespace std;
//calculate fibonaci sries;
int fib(int n){
    if(n==0 or n==1)
        return n;
        return (fib(n-1)+fib(n-2));

}

int main(){
  int r=  fib(3);
  cout<<r;
}