#include<iostream>
#include<vector>
using namespace std;
//repeated find min element in unshorted array & place it at begining
void selectionshort(vector<int> &v){
    int n=v.size();
    
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index]){
           min_index=j;
            }
            
            }
            if(min_index!=i){
                swap(v[i],v[min_index]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    selectionshort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}