#include<iostream>
using namespace std;
void f(int n,int k){
    if(k==0) return;
    f(n,k-1);
    cout<<n*k<<endl;

}
int main(){
    f(5,12);
    return 0;
}