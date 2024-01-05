#include<iostream>
using namespace std;
int main(){
    int arr[2]={1,14};
    int *ptr=&arr[0];
    cout<<ptr<<arr<<endl;
    cout<<*ptr<<" "<<*arr<<endl;
    

}