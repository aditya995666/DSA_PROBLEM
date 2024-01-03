#include<iostream>
using namespace std;
bool f(int *arr,int n,int i,int x){
    if(i==n){
        return false;
    }
    return (arr[i]==x) || f(arr,n,i + 1,x);
}
int main(){
    int  arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int x=6;
    bool result = f(arr,n,0,x);
    if(result) cout<<"yes";
    else cout<<"no";
}