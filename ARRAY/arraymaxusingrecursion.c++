#include<iostream>
using namespace std;
int f(int *arr,int idx,int n){
    if(idx==n-1){
    return arr[idx];
    }
    return max(arr[idx], f(arr,idx+1,n));
}
int main(){
    int arr[]={3,5,10,25,67,1,4};
    int n=7;
    cout<< f(arr,0,n)<<endl;
   

}