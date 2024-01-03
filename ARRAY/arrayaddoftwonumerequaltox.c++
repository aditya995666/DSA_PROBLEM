#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int x=6;
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--){
            if(array[i] + array[j] == x){
                return true;
            }
            else{
                return false;
            }
        }
    }

}