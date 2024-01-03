#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int a[r1][c1];
   
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
cin>>a[i][j];
        }
    }
     int r2,c2;
    cin>>r2>>c2;
    int b[r2][c2];
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
cin>>b[i][j];
        }
    }
    if(c1!=r2){
        cout<<" multiply not possible";
    }
    
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++){
         value+=a[i][k]*b[k][j]; 
        }
        c[i][j]=value;
    }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}