#include<iostream>

using namespace std;
int largestnumber(int  array[],int size){
    int max=INT16_MIN;
    int secound_max=INT16_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }

    }
    for(int i=0;i<size;i++){
        if(array[i]>secound_max && array[i]!=max){
           secound_max=array[i];
}
    }
       return secound_max;
}
int main(){

    int array[]={1,2,3,4,3,2,1};
    int n=7;
     cout<<largestnumber(array,n)<<endl;
}