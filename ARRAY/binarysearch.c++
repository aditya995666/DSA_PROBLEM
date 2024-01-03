#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> &v,int target){
    //define search;
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
     //clculare = midpoint;
     int mid=(lo+hi)/2;
     if(v[mid]==target){ return mid;
     }
      else if(v[mid]<target){
        //discard the left 
        lo=mid+1;


      
     }
     else{
        hi=mid-1;
     }
    }
}
int main(){
    int n;
    cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    
    }
     int target;
    cin>>target;
   
   cout<<binarysearch(v,target)<<" ";
    
        
    
    

}