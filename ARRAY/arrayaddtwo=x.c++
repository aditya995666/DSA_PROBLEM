#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
     int n=5;
    int i=0,j=n-1;
    int x=3;
   
    bool found;
    while(i<j){
            if( array[i] - array[j] == x){
                found = true;
                break;

            }
            else if(array[i]+array[j]<x){
                i++;
            }
            else  {
                j--;
        }
    }
        if(found==true){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    

}