#include<iostream>
#include<vector>
using namespace std;
void f(int *arr,int n,int i,int sum,vector<int> result){
    if(i==n){
        // pussh sum and back;
        result.push_back(sum);
         return ;
    }
    // first at index in add of sum
    // index++;
    f(arr,n,i+1,sum+arr[i],result );
      // secound at index not add of sum
    //index++
    f(arr,n,i+1,sum,result);
}
int main(){
    int arr[]={2,3,5};
    // n= size of arr:
    int n=3;
    vector<int> result;
// sum=0 and idx=0:
    f(arr,n,0,0,result);
    for( int i=0;i<result.size();i++)
    cout<<result[i]<<endl;
    return 0;
}
