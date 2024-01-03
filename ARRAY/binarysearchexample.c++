#include<iostream>
#include<vector>
using namespace std;
//time o(log n);
//space(1);
//lowerbound:
int lowerbond(vector<int> &v,int target){
    int lo=0;
    //size of n:
    int  hi=v.size()-1;
    int ans=-1; 
    while(lo<=hi){
        int mid=(lo+(hi-lo))/2;
        if(v[mid]>=target){
            ans=mid;
            hi=mid-1;

        }
    
        else{
            lo=mid+1;

        }
    }

    
    return ans;
}
//upperbound:
    int uppurbond(vector<int> &v,int target){
 int lo=0;
    int  hi=v.size()-1;
    int ans=-1; 
    while(lo<=hi){
        int mid=(lo+(hi-lo))/2;
        if(v[mid]>target){
            ans=mid;
            hi=mid-1;

        }
        
    
        else{
            lo=mid+1;

        }
    }
    return ans;
    }
int main(){
    int n;
    cin>>n;
    // {2 3 3 5 5 5 7 7 7 9 9 9 }:
   std:: vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cin>>target;
   std:: vector<int> result;
     int lb=lowerbond(v,target);
     if(v[lb]!=target){
        result.push_back(-1);
        result.push_back(-1);
     }
     else{
        int up=uppurbond(v,target);
        result.push_back(lb);
        result.push_back(up-1);

     }
     cout<<result[0]<<" "<<result[1]<<" ";
     return 0;
}
