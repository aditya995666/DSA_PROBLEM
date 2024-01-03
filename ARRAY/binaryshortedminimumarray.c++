#include<iostream>
#include<vector>
using namespace std;
int shortedroted(vector<int> &v){
    if(v.size()==1) return (0);
  int   lo=0;
  int  hi=v.size()-1;
  if(v[lo]<v[hi]){
    return lo;
  }
  while(lo<=hi){
    int mid = lo+(hi-lo)/2;
    if(v[mid]>v[mid]+1){
        return mid+1;
    }
    if(v[mid]<v[mid-1]){
        return mid;
    }
    if(v[mid]>v[lo]){
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
    cout<<shortedroted(v)<<" ";

}