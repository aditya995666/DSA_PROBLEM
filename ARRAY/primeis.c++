#include<iostream>
using namespace std;
bool oddeven(int n){
for(int i=2;i<=n-1;i++){
  if(n%i==0){
    return false;
  }
    else{
        return true;
    }
  }}
int main(){
    int a=2;
    int b=10;
    for(int i=a;i<=b;i++)
    {
        if(oddeven(i)){
        cout<<i;
    }
    }
        }