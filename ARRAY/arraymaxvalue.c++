#include<iostream>
using namespace std;
int main(){
int array[]={1,18,34,4,5};
 int max=array[0];
for(int i=1;i<5;i++){
    if(max<array[i]){
   max =array[i];
}
}
    cout<<max;
}