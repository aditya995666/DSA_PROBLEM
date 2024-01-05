#include<iostream>
using namespace std;
 int main(){
   int array1[]={01,6,9};
   int array2[]={1,3,4,6,7};
    int m=4;
    int n=5;
    int i=0;
    int j=0;
    int k=0;
    int result[m+n] ;
    while(i<m and j<n){
      if(array1[i]<array2[j]){
         result[k]=array1[i];
         i++;
         k++;

      }
      else{
         result[k]=array2[j];
         k++;
         j++;
      }


    }
    while(i<m){
      result[k]=array1[i];
      k++;
      i++;
    }
    while(j<n){
      result[k]=array2[j];
   j++;
   k++;
    }
    for(int i=0;i<(m+n);i++)
      cout<<result[i]<<" ";
      return 0;
    
    }