#include<iostream>
#include<vector>
using namespace std;
void shortedarr(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]==0&&v[j+1]!=0){
     swap(v[j+1],v[j]);    
    } 
        }
    }
}
int  main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    shortedarr(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
