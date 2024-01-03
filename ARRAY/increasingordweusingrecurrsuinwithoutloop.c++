#include<iostream>
using namespace std;
void f(int n){
if(n<1) return;
//go n-1 term print
f(n-1);
cout<<n<<endl;
}

int main(){
    f(60);
    return 0;

}