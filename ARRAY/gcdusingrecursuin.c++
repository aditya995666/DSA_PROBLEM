#include<iostream>
using namespace std;
int f(int a, int b){
    if(a>b) return (a,b);
    if(a==0) return 0;
    return f(b,a%b);
}
int main(){
    int x=f(48,40);
    cout<<x<<endl;
}