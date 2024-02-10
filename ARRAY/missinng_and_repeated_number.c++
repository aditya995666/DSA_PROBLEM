#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int> findelement(vector<int> arr,int n){
        int count =1;
        int ret=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]==count){
                count++;
            }
            else if(arr[i-1]==arr[i]){
                ret=arr[i];
            }
        }
          return {count,ret};
    }
   
};
int main(){
    #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int> findelement(vector<int> arr,int n){
        int count =1;
        int ret=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]==count){
                count++;
            }
            else if(arr[i-1]==arr[i]){
                ret=arr[i];
            }
        }
          return {count,ret};
    }
   
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        solution ob;
        auto ans=ob.findelement(a,n);
        cout<<ans[0]<<" "<<ans[1]<<" ";
    }
    return 0;

}
