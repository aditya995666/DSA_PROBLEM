#include<iostream>
using namespace std;
int main(){
char array[5];
for(char &ele:array){
    cin>>ele;
}
for(int i=0;i<5;i++){
    cout<<array[i]<<endl;
}
}