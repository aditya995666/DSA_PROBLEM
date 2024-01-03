#include<iostream>

using namespace std;
int main(){
    int array[]={1,2,3,4,5,6,7};
    int x=5;
    int  count=0;
    for(int i=0;i<7;i++){
      for(int j=i+1;j<7;j++){
        for(int k=j+1;k<7;k++){
          if(array[i]+array[j]+array[k]==x){
            count++;
          }
        }
      }
    }
        cout<<count<<endl; 
        return  0;
}
    
    
    