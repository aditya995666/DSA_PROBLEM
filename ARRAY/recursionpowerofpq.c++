#include<iostream>
using namespace std;
//calculate sum of digit sries;
int power(int n,int m){
    
    if(m==0 ) return n; 
        return n * power(n,m-1);
               

}

int main(){
  int sum=  power(2,5);
  cout<<sum;
}