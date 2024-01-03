#include<iostream>
using namespace std;
//calculate sum of digit sries;
int sd(int n){
    
    if(n>=0 and n<=9) return n;
        return sd(n /10) + (n % 10);
               

}

int main(){
  int sum=  sd(365);
  cout<<sum;
}