#include<iostream>
using namespace std;
int main(){
    int r1,r2;
    cin>>r1>>r2;
    int a[r1][r2];
    int r3,r4;
    int b[r3][r4];
    cin>>r3>>r4;
    for(int i=0;i<r1;i++){
        for(int j=0;j<r2;j++){
cin>>a[i][j];
        }
    }
     for(int i=0;i<r3;i++){
        for(int j=0;j<r4;j++){
cin>>b[i][j];
        }
    }
    if(r2!=r3){
        cout<<" multiply not possible";
    }
    int value=0;
    int c[r1][r3];
    for(int i=0;i<r1;i++){
        for(int j=0;j<r4;j++){
            for(int k=0;k<r3;k++){
         value+=a[i][k]*b[k][j]; 
        }
        c[i][j]=value;
    }}
    for(int i=0;i<r1;i++){
        for(int j=0;j<r4;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}