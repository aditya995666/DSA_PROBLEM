#include<iostream>
using namespace std;
bool egibility(int age,int limit){
  if(age>=limit){
    return true;
  }
    else{
        return false;
    }
  }
int main(){
    int rounak=egibility(21,18);
    if(rounak){
        cout<<"yes";
    }
        else{
            cout<<"no";

        }

    }
