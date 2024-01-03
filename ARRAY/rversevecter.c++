#include<iostream>
#include<map>  
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n ; i++){
        v[i]=i+1;
}
    reverse(v.begin(),v.end());
    for(int  i=0;i<n;i++){
        cout<<v[i];
    }
}