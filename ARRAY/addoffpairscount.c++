#include<iostream>
using namespace std;
int main(){
    int array[]={5,10,15,20,25};
     int n=5;
    int i=0,j=n-1;
    int x=15;
   int count=0;
    
    while(i<j){
            if((array[i] + array[j]) == x){
                count+=1;
                break;

            }
            else if(array[i]+array[j]<x){
                i++;
            }
            else  {
                j--;
        }
    }
    cout<<count<<" ";

}