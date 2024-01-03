#include<iostream>
using namespace std;
int main(){
    int array[]={5,10,15,20,25};
     int n=5;
    int i=0,j=1;
    int x=5;
   
    bool found;
    while(i<n&&j<n){
            if( abs (array[i] -  array[j]) == x){
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